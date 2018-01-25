package asmeta_to_cpp_travisci;



import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

import org.asmeta.parser.ASMParser;
import org.junit.Test;

public class ParserTest {

	@Test
	public void test() {
		try {
			String asmFile = "asm_examples/ferrymanSimulator.asm";
			File file = new File(asmFile);
			assertTrue(file.exists());
			ASMParser.setUpReadAsm(file);
			// write to page file the results of the parser
			PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("docs/results.txt", true)));
			out.println(asmFile);
			out.close();
			System.out.println(new File("docs/results.txt").getAbsolutePath());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			fail("");
		}
	}

}
