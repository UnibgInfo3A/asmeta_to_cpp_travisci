/** at every step increments the seconds 
*/
asm Domains

import StandardLibrary

signature:
	domain Hour subsetof Integer
	controlled time: Map(Hour,String)
	controlled text: String


definitions:
	domain Hour = {0 .. 23}

	main rule r_Main = 




default init s0:


