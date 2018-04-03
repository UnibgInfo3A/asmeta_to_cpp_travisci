asm ExtendRule1

import StandardLibrary

signature:

	dynamic domain Products subsetof Integer

	static p1: Products
	static p2: Products
	static p3: Products

definitions:

	main rule r_main =
	let ($p = 51) in
		extend Products with $p do skip
	endlet

default init s0:
 domain Products = {0..50}
