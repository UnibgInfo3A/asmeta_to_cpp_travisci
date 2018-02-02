package asmeta_to_cpp_travisci;

import static org.junit.Assert.fail;

import org.asmeta.tocpp.abstracttestgenerator.AsmTestGeneratorBySimulationTest;
import org.asmeta.tocpp.tocunit.AsmToBoostModuleTest;
import org.asmeta.tocpp.tocunit.Experiment;
import org.junit.Test;

public class BoostUnitCoverageTest {

	@Test
	public void test1() throws Exception {
		String asmFile = "asm_examples/coffeeVendingMachineNC.asm";
		testAsmFile(asmFile, "nusmv", "8", "7");
	}
	
	@Test
	public void test2() throws Exception {
		String asmFile = "asm_examples/coffeeVendingMachineNC.asm";
		testAsmFile(asmFile, "simulator", "8", "7");
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
