package asmeta_to_cpp_travisci;

import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.sql.Timestamp;
import java.util.ArrayList;
import java.util.List;

import org.asmeta.parser.ASMParser;
import org.junit.Test;

public class ParserTest {

	private static final String RESULTS_INDEX_HTML = "docs/index.html";

	@Test
	public void testAllFiles() {
		for (String asmFile : getAllASMFiles()) {
			testAsmFile(asmFile);
		}
	}

/*	@Test
	public void test2() {
		String asmFile = "asm_examples/coffeeVendingMachine.asm";
		testAsmFile(asmFile);
	}

	@Test
	public void test3() {
		String asmFile = "asm_examples/coffeeVendingMachineNC.asm";
		testAsmFile(asmFile);
	}*/

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

}