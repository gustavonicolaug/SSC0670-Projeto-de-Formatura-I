#!/bin/bash
#--
#Nome do arquivo: run_perf.sh
#Projeto: Análise de desempenho comparativa entre diferentes arquiteturas de computadores
#Versão: v1.0
#	
#	Description:
#	This script runs and evaluate performance of a single program using linux-perf
#
#Autor: 	Gustavo Nicolau Gonçalves
#NUSP: 		9012945
#Curso: 	Engenharia de Computação
#Data:		15/10/2018
#--

USAGE="Usage: ./run_perf -h or /Path/to/PROGRAM /Path/to/OUTPUT"
HELP=$'\n run_perf script:\n This script will run and evaluate a single program using "perf stat".\n\n Usage: ./run_perf /Path/to/PROGRAM /Path/to/OUTPUT\n \n'
PROGRAM=$1 
OUTPUT=$2

if [ $# == 0 ] ; then
    echo $USAGE
    exit 1;
fi

if [ $PROGRAM == -h ]; then
	echo "$HELP";
else
	sudo perf stat -e cycles -e instructions -e branch-instructions -e branch-misses -e cache-misses -o $OUTPUT $PROGRAM
fi
