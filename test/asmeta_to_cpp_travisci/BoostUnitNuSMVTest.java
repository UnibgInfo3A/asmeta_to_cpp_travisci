package asmeta_to_cpp_travisci;

import static org.junit.Assert.fail;

import org.asmeta.tocpp.abstracttestgenerator.AsmTestGeneratorByNuSMVTest;
import org.junit.Test;

public class BoostUnitNuSMVTest { 


	@Test
	public void test() throws Exception {
		String asmFile = "asm_examples/coffeeVendingMachineNC.asm";
		testAsmFile(asmFile,1);
	}
	
		
	
	private void testAsmFile(String asmFile, int i) {
		try {
			AsmTestGeneratorByNuSMVTest.genTestsandTranslate(asmFile,i);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			fail("failed");
		}
	}
	

}
