asm sleepingBarber

//In computer science, the sleeping barber problem is a classic inter-process
//communication and synchronization problem between multiple operating system processes.
//The problem is analogous to that of keeping a barber working when there are customers,
//resting when there are none and doing so in an orderly manner.
//The analogy is based upon a hypothetical barber shop with one barber. The barber has
//one barber chair and a waiting room with a number of chairs in it. When the barber finishes
//cutting a customer's hair, he dismisses the customer and then goes to the waiting room to
//see if there are other customers waiting. If there are, he brings one of them back to the
//chair and cuts his hair. If there are no other customers waiting, he returns to his chair and sleeps in it.
//Each customer, when he arrives, looks to see what the barber is doing. If the barber
//is sleeping, then the customer wakes him up and sits in the chair. If the barber is
//cutting hair, then the customer goes to the waiting room. If there is a free chair
//in the waiting room, the customer sits in it and waits his turn. If there is no free
//chair, then the customer leaves. Based on a naive analysis, the above description
//should ensure that the shop functions correctly, with the barber cutting the hair
//of anyone who arrives until there are no more customers, and then sleeping until
//the next customer arrives. In practice, there are a number of problems that can occur
//that are illustrative of general scheduling problems.

//The problems are all related to the fact that the actions by both the barber and
//the customer (checking the waiting room, entering the shop, taking a waiting room
//chair, etc.) all take an unknown amount of time. For example, a customer may arrive
//and observe that the barber is cutting hair, so he goes to the waiting room. While
//he is on his way, the barber finishes the haircut he is doing and goes to check
//the waiting room. Since there is no one there (the customer not having arrived yet),
//he goes back to his chair and sleeps. The barber is now waiting for a customer and
//the customer is waiting for the barber. In another example, two customers may arrive
//at the same time when there happens to be a single seat in the waiting room. They
//observe that the barber is cutting hair, go to the waiting room, and both attempt
//to occupy the single chair.

import StandardLibrary

signature:
	abstract domain Chair
	controlled barberSleeping: Boolean
	controlled chairOccupied: Chair -> Boolean
	monitored newClient: Boolean
	monitored haircutFinished: Boolean

	static chair1: Chair
	static chair2: Chair 

definitions:

	rule r_barber =
		if(not(barberSleeping)) then
			if(haircutFinished) then
				choose $x in Chair with chairOccupied($x) do
					chairOccupied($x) := false
				ifnone
					barberSleeping := true
			endif
		endif

	rule r_newClient =
		if(newClient) then
			if(barberSleeping) then
				barberSleeping := false
			else
				choose $c in Chair with not(chairOccupied($c)) do
					chairOccupied($c) := true
			endif
		endif



	main rule r_Main =
		par
			r_barber[]
			r_newClient[]
		endpar

default init s0:
	function chairOccupied($c in Chair) = false
	function barberSleeping = true
