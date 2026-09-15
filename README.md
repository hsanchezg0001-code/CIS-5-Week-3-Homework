# Homework 3 · What works, what doesn't

**Week 03 · Types & variables**  
**Theme:** Pick a type, give it a first value, print the name


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

In the video: run the working program. Then uncomment one illegal line, show the first error, comment it back, and rebuild.

**Your demo:** _[my link](https://youtu.be/43A6fF5Zz6M)_


## What to build
Lab 3, then two more boxes, then a short paragraph from the names. After it runs, prove you know the type rules: change a value and explain what the console did, then leave two commented-out lines that would not compile and say why.

The point is not a longer bio. It is showing what a type allows, and what it refuses.

## Requirements
- Everything from Lab 3: `name` (string), `age` (int), `height_m` (double), `initial` (char), `student` (bool), and one `const`
- Two more initialized boxes: `int credits` and `double gpa`
- A short paragraph printed with `cout` from those names — a classmate should be able to read it
- Change at least one value from a first choice. Leave a comment that names the old value, the new value, and why the console followed
- Two comments that explain a type choice — why `credits` is an `int`, why `gpa` is a `double`, or why the year is `const`. Not `// print age`
- Two lines that would not compile, left commented, each with the reason. Pick from this week’s menu: a string in an `int`, `"S"` in a `char`, or an assignment to `const`
- File-top comment with your name and the week
- One `.cpp` that still builds — the broken lines stay commented

## Sample output
```
=== About me ===
Name: Herberth Sanchez-Gomez
Age: 24
Credits: 15
GPA: 3.2
Year: 2026

Sam Rivera is 19, taking 13 credits in 2026, with a 3.8 GPA.
```

```
// credits started at 12. I changed it to 13. The paragraph now says 13
// because cout prints credits, not a leftover 12 in quotes.

// int age = "nineteen";   // would not compile — a string does not fit in an int
// CURRENT_YEAR = 2027;    // would not compile — const cannot be assigned again
```

Your paragraph can be different. The rule is the same: the numbers on the screen came out of the variables, and the comments prove you know why.

## Starter
`main.cpp` — or keep going from your lab file. Either is fine.

## Deliverables
1. Course-visible GitHub repo (link opens)
2. README: how to run + a sample of the paragraph + one line that would not work and why
3. Short demo video: working run, then uncomment one illegal line, show the first error, comment it back, rebuild
4. Canvas links

## Scope fence
One file. No `cin` this week — that is next week. No extra functions. No `sizeof`. Do not leave the file broken.

## Integrity
- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric
Graded on: it runs, it meets the prompt, the comments explain a change and two failures, and the GitHub repo plus demo video are there.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, a real run, and one compiler error from an illegal line you then comment back.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
