asm ExtendRule1

import StandardLibrary

signature:

	dynamic domain Products subsetof Integer
	dynamic abstract domain AbsDom

	static p1: AbsDom
	static p2: AbsDom
	static p3: AbsDom

definitions:

	main rule r_main =
	//let ($p = 51) in
		extend AbsDom with $p do skip
	//endlet

default init s0:
 domain Products = {0..50}
