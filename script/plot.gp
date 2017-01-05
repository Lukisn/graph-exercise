# 1-D Plot mit Gnuplot

# interactive output:
reset
set terminal qt

set grid
set title "Mean Setup Time of Different Matrix Representations (Mean of 100 Samples)"
set xlabel "Symmetric Central Bandwidth of Band Matrix"
set ylabel "Runtime of Matrix Creation in seconds"
set key top left horizontal box

plot "measurements.txt" using 1:2 title "Adjacency Matrix",\
     "measurements.txt" using 1:3 title "Adjacency List"

pause -1 "continue with [Enter]!"

# eps output:
set terminal postscript eps enhanced color font "Helvetica,20" linewidth 2
set output "measurements.eps"
replot

reset
