package asmeta_to_cpp_travisci;



import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;

import java.io.File;

import org.asmeta.parser.ASMParser;
import org.junit.Test;

public class ParserTest {

	@Test
	public void test() {
		try {
			File file = new File("asm_examples/ferrymanSimulator.asm");
			assertTrue(file.exists());
			ASMParser.setUpReadAsm(file);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			fail("");
		}
	}

}
