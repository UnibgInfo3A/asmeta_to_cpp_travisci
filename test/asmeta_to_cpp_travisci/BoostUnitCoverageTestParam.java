package asmeta_to_cpp_travisci;

import static org.junit.Assert.fail;

import java.io.File;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;

import org.apache.log4j.Level;
import org.apache.log4j.Logger;
import org.asmeta.asm2code.compiler.CppCompiler;
import org.asmeta.tocpp.abstracttestgenerator.AsmTestGeneratorBySimulationTest;
import org.asmeta.tocpp.tocunit.AsmToBoostModuleTest;
import org.asmeta.tocpp.tocunit.Experiment;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;

@RunWith(Parameterized.class)
public class BoostUnitCoverageTestParam {

	
	static Object[][] getAllASMFiles() {
		return getAllASMFiles(new File("asm_examples"));
	}

	static Object[][] getAllASMFiles(File dir) {
		assert Files.isDirectory(dir.toPath());

		File[] listOfFiles = dir.listFiles();
		Object[][] result = new Object[listOfFiles.length-1][1]; //-2 perche uno e la standard library
		int i=0;
		for (File file : listOfFiles) {
			if (file.isFile() && file.getName().endsWith(".asm") && !file.getName().equalsIgnoreCase("StandardLibrary.asm")) {
				result[i][0]=file.getPath();
				//result.add(file.getPath());
				i++;
			} /*else if (file.isDirectory()) {
				Object[][] allFiles = getAllASMFiles(file);
						for (int j=0; j<allFiles.length; j++) {
							result[i][0]=allFiles[i];
							i++;
						}
			}*/
		}
		return result;
	}
	
	
	
	 @Parameters
	    public static Collection<Object[]> data() {
	        return Arrays.asList(getAllASMFiles());
	    }
	   
	String asmFile;
	
	public BoostUnitCoverageTestParam(String s){
		asmFile = s;
	}
	
	@Test
	public void test1() throws Exception {
		Logger.getLogger(CppCompiler.class).setLevel(Level.DEBUG);;
		testAsmFile(asmFile, "simulator", "1000", "8");
	}
	
	/*@Test
	public void test2() throws Exception {
		String asmFile2 = "asm_examples/coffeeVendingMachineNC.asm";
		testAsmFile(asmFile2, "simulator", "8", "7");
	}*/

	private void testAsmFile(String asmFile, String type, String num1, String num2) {
		try {
			AsmToBoostModuleTest.testSpec(asmFile, type, num1, num2);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			fail("failed");
		}
	}

}
