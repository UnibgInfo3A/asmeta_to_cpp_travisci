package asmeta_to_cpp_travisci;

import static org.junit.Assert.fail;

import java.util.Arrays;
import java.util.Collection;

import org.asmeta.tocpp.abstracttestgenerator.AsmTestGeneratorBySimulationTest;
import org.asmeta.tocpp.tocunit.AsmToBoostModuleTest;
import org.asmeta.tocpp.tocunit.Experiment;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;

@RunWith(Parameterized.class)
public class BoostUnitCoverageTestParam {

	 @Parameters
	    public static Collection<Object[]> data() {
	        return Arrays.asList(new Object[][] {     
	                 {"asm_examples/coffeeVendingMachineNC.asm"}, 
	                 {"asm_examples/coffeeVendingMachineNC.asm" }  
	           });
	    }
	   
	String asmFile;
	
	public BoostUnitCoverageTestParam(String s){
		asmFile = s;
	}
	
	@Test
	public void test1() throws Exception {
		testAsmFile(asmFile, "simulator", "8", "7");
	}
	
	@Test
	public void test2() throws Exception {
		String asmFile2 = "asm_examples/coffeeVendingMachineNC.asm";
		testAsmFile(asmFile2, "simulator", "8", "7");
	}

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
