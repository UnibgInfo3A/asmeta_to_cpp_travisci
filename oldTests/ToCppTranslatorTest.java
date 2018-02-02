package asmeta_to_cpp_travisci;

import static org.junit.Assert.fail;

import java.io.File;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.List;

import org.asmeta.asm2code.GeneratorCompilerTest;
import org.junit.Test;

public class ToCppTranslatorTest { 


	@Test
	public void testAllFiles() {
		for (String asmFile : getAllASMFiles()) {
			testAsmFile(asmFile);
		}
	}
	
	
	List<String> getAllASMFiles() {
		return getAllASMFiles(new File("asm_examples"));
	}
	
	List<String> getAllASMFiles(File dir) {
		assert Files.isDirectory(dir.toPath());
		List<String> result = new ArrayList<>();
		File[] listOfFiles = dir.listFiles();
		for (File file : listOfFiles) {
			if (file.isFile() && file.getName().endsWith(".asm")) {
				result.add(file.getPath());
			} else if (file.isDirectory()) {
				result.addAll(getAllASMFiles(file));
			}
		}
		return result;
	}
	
	private void testAsmFile(String asmFile) {
		try {
			GeneratorCompilerTest.test(asmFile);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			fail("");
		}
	}
	

}
