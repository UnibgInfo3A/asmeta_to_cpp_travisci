/** at every step increments the seconds 
*/
asm MapDomain

import StandardLibrary

signature:
	controlled voti: Map(String, Integer)
//	monitored votiMon: Map(String, Integer)


definitions:


	main rule r_Main =
		voti := {"A"-> 5}



default init s0:


