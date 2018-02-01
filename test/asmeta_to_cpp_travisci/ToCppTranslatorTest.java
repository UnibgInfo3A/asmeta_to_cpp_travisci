package asmeta_to_cpp_travisci;

import static org.junit.Assert.fail;

import org.asmeta.asm2code.GeneratorCompilerTest;
import org.junit.Test;

public class ToCppTranslatorTest { 
 

	@Test
	public void test() {
		String asmFile = "asm_examples/ferrymanSimulator.asm";
		testAsmFile(asmFile);
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
