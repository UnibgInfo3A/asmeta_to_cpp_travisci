package asmeta_to_cpp_travisci;

import static org.junit.jupiter.api.Assertions.*;

import java.io.File;

import org.asmeta.parser.ASMParser;
import org.junit.jupiter.api.Test;

class ParserTest {

	@Test
	void test() {
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
