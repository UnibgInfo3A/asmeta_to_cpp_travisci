asm iterativeWhile

import StandardLibrary

signature:
	controlled contrC: Integer
	controlled controlledF: Integer
	monitored doWhile: Boolean

definitions:
	main rule r_Main =
		if(doWhile) then 
			while(contrC < controlledF) do
				contrC := contrC + 1
		else
			par
			contrC := 0
			controlledF:=5
			endpar
		endif

default init s0:
	function contrC = 3
	function doWhile = true
	function controlledF=5
