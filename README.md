<div align=center>
	<h1>
		<i>Push_Swap</i>
	</h1>
	<img src=https://github.com/GustaDNS/42-project-badges/blob/main/badges/push_swapn.png/>
	<p align=center>
    		In this repository, you can accsess the code created for the Push Swap project, mandatory and bonus part.
	</p>
</div>

---

<div align=center>

| Keywords | Skills |
|----------|--------|
| - Sorting algorithms | - Rigor |
| - Battery concept and handling elements | - Unix |
| - Algorithm implementation | - Algorithms & AI |
|   | - Imperative programming |
</div>

---

<h2>About</h2>

<p>
    This project involves creating a program to sort a list of numbers in ascending order using a set of predefined movements. The sorting process utilizes two stacks, Stack A and Stack B:
</p>

<ul>
    <li><strong>Stack A:</strong> Initially holds the list of numbers that need to be sorted.</li>
    <li><strong>Stack B:</strong> Starts empty and is used as an auxiliary stack during the sorting process.</li>
</ul>

<p>
    The objective is to transfer the numbers from Stack A to Stack B using the defined operations to achieve a sorted sequence in ascending order.
</p>

<p>
    The challenge lies in performing this sorting efficiently while adhering to the constraints and movement rules provided.
</p>

<h4 aling=left>
  Allowed Operations:
</h4>

| Movement | How it works |
| :---: | :--- |
| pa | Take the first element at the top of B and put it at the top of A. Do nothing if B is empty. |
| pb | Take the first element at the top of A and put it at the top of B. Do nothing if A is empty. |
| sa | Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements. |
| sb | Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements. |
| ss | sa and sb at the same time. |
| ra | Shift up all elements of stack A by 1. The first element becomes the last one. |
| rb | Shift up all elements of stack B by 1. The first element becomes the last one. |
| rr | ra and rb at the same time. |
| rra | Shift down all elements of stack A by 1. The last element becomes the first one. |
| rrb | Shift down all elements of stack B by 1. The last element becomes the first one. |
| rrr | rra and rrb at the same time. |

Run it with:
```sh
  $> ./push_swap <random_numbers>
```

<p>
  It must display the list of instructions used to sort the list of numbers.
</p>

<h3>
    Usage
</h3>
<p>
Clone this repository in you local computer using a terminal:
</p>

```sh
$> git clone git@github.com:GustaDNS/Push_swap.git
```

After cloning the project to your local repository, you can use the following commands from the Makefile:
<ul>
    <li> <b>make all:</b> or just <b>make</b> compiles the project</li>
    <li><b>make clean:</b> deletes the object files created during compilation</li>
    <li><b>make fclean:</b> executes the <b>clean</b> command and also deletes the binary files</li>
    <li> <b>make re:</b> runs the <b>fclean</b> command followed by <b>make all</b> to recompile the project</li>
    <li> <b>make visualizer:</b> runs the <b>visualizer</b> to use a interface and see how the algorithm work</li>
</ul>
