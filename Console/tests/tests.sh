#!/bin/bash

#############
# Script to test the algorithms.
# Set the variables in the first 26 lines to what you want/need them
# to be. For example, your paths might be different.
# 
# TO RUN:
# from terminal: ./tests.sh t
#		where t = 0 for test where surface area ratio is allowed to change
#		      t = 1 for test where surface area is maintained.
# OUTPUT: 
# It will print some updates to stdout just to keep the user updated on
# what is going on. The interesting data, i.e. the times, will be sent to
# a specified output file.
#############

# Path to where the executable is.
# You might need to change this one.
executablePath="../build-Console-clang-Debug/SpaceCollisionSystemConsole"

# Path to the file that the output will be sent to.
outPath="tests_out_$1.txt"

# Number of timesteps to complete.
timesteps=15000

# list of seeds to try.
seeds=(123456789 987654321 56473829 4546987321 789654123)

# list of the algorithms to be ran. 
algs=("Brute Force" "Quad/Oct Tree" "Spatial Hashing" "Spatial Index" "Sweep 'N Prune Simple" "Sweep 'N Prune Multi")

# list of number of particles to test on.
# Jeff mentioned we might want to use these numbers
numParticlesList=(8 16 32 64 128 256 512)

# define pi for calculation of surface area. Hope this is
# enough decimals.
pi=3.141592654

# percentage to try to keep for the surface area tests
percentage=0.40

# window size to use. It is constant for these tests.
# must be something that produces at most 40% of the 
# window to be particle surface are. 
winSize=$(echo "sqrt((${numParticlesList[${#numParticlesList[*]}-1]}*$pi*25)/$percentage)" | bc)


# Ok, now we loop through all these things to do the tests.

# For the three dimension options.
for d in 2 3
do
	# print to output file
	echo "">>$outPath
	echo "dimensions: $d">>$outPath

	#print to terminal
	echo "dimensions: $d"

	# For every seed we want to use...
	for s in ${seeds[*]} 
	do
		echo "">>$outPath
		echo "seed: $s">>$outPath
		echo "seed: $s"

		# Run every algorithm...
		for a in ${!algs[*]}
		do
			echo "">>$outPath
			echo ${algs[$a]}>>$outPath
			echo "${algs[$a]}"

			# for every number of particles we want to test.
			for n in ${numParticlesList[*]}
			do
				echo "number of particles: $n"

				# check if we need to change winSize for the 
				# surface area tests.
				if [ "$1" -eq "1" ]
				then
					winSize=$(echo "sqrt(($pi*25*$n)/$percentage)" | bc)
				fi
				#echo "window size: $winSize X $winSize"
				$executablePath $d $a $winSize $n $timesteps $s>> $outPath
			done
		done
	done
done
