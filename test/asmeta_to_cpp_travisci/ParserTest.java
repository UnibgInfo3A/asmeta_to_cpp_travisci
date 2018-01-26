package asmeta_to_cpp_travisci;

import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.sql.Timestamp;

import org.asmeta.parser.ASMParser;
import org.junit.Test;

public class ParserTest {

	private static final String RESULTS_INDEX_HTML = "docs/index.html";

	@Test
	public void test() {
		String asmFile = "asm_examples/ferrymanSimulator.asm";
		testAsmFile(asmFile);
	}	

	@Test
	public void test2() {
		String asmFile = "asm_examples/coffeeVendingMachine.asm";
		testAsmFile(asmFile);
	}

	private void testAsmFile(String asmFile) {
		try {
			File file = new File(asmFile);
			assertTrue(file.exists());
			ASMParser.setUpReadAsm(file);
			// write to page file the results of the parser
			PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter(RESULTS_INDEX_HTML, true)));
			// add time stamp
			out.print(new Timestamp(System.currentTimeMillis()) + "\t");
			// name of the file
			out.println(asmFile);
			out.close();
			System.out.println(new File(RESULTS_INDEX_HTML).getAbsolutePath());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			fail("");
		}
	}
	
	@Test
	public void test3() {
		try {
			String asmFile = "asm_examples/coffeeVendingMachineNC.asm";
			File file = new File(asmFile);
			assertTrue(file.exists());
			ASMParser.setUpReadAsm(file);
			// write to page file the results of the parser
			PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("results/index.html", true)));
			// add time stamp
			out.print(new Timestamp(System.currentTimeMillis()) + "\t");
			// name of the file
			out.println(asmFile);
			out.close();
			System.out.println(new File("results/index.html").getAbsolutePath());
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			fail("");
		}
	}

}
