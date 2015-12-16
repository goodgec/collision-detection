#!/bin/bash

executablePath="./SpaceCollisionSystemConsole"
outPath="tests2D_out.txt"
timesteps=5000
seeds=(123456789 987654321)
algs=("Brute Force" "Quad Tree" "Spatial Hashing" "Sweep 'N Prune")
numParticlesList=(8 16)

for s in ${seeds[*]} 
do
	echo `echo "seed: $s">>$outPath`

	for a in ${!algs[*]}
	do
		echo `echo ${algs[$a]}>>$outPath`

		for n in ${numParticlesList[*]}
		do
			echo `$executablePath 2 $a $n $timesteps $s>> $outPath`
		done
	done
done
