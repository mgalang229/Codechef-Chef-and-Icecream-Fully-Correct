# Codechef-Chef-and-Icecream-Fully-Correct
### Problem  
![](capture.png)
### Program Simulation (Input: 3, 5, 10, 15)
<pre>
  f = 0, t = 0, cnt = 0, n = 3

  a[i] == 5
  f++
  f = 1
  cnt++
  cnt = 1

  a[i] == 10
  f--
  f = 0
  t++
  t = 1
  cnt++
  cnt = 2

  a[i] == 15
  t--
  t = 0
  cnt++
  cnt = 3

  if(cnt == n) print YES
  else print NO

  Final Output:
  NO
</pre>
