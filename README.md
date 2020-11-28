# CTeX - plain TeX reborn in C

Adapt pdftex to C, cutting away the cruft of legacy.

## Why

Official TeX is maintained by Donald Knuth in WEB -- a literate programming framework invented by Knuth. TeX is effectively declared bug free. While one may like the sound of it, this essentially means TeX is frozen in a decades old legacy state. For a glimpse, this legacy state writes in a pascal language that you can't find a compiler. It assumes no memory facility and no string facility, so TeX implements its own programming environment. You can't take any parts of TeX's code and expect to use it in your own application -- the same way that you shouldn't expect to take a DOS game and expect it to run in your computer today.

The ever green state of TeX is achieved by maintaining a set of translation framework -- called `web2c`. Maintaining TeX has littel to do with understanding TeX, but mostly about understanding how the legacy environment works. This is very ironic to me. The whole idea of literate programming is to write the code for human, not for the computer, so the software can be forever maintained. The reality of TeX is, however, very difficult to maintain. In fact, nobody today is dealing with Knuth's TeX directly. Every one is using a single distribution -- TeX Live. TeX Live maintains the cruft, all the cruft. You want plain TeX? Here is a gigabytes of download and deeply nested build system which will build *everything*. Your plain TeX will be there.

Use my favorate analogy of inventing the wheel, once the wheel is invented, I would expect seeing all kinds of wheels used in all kinds of places. In stead in the world TeX, we have this single, huge, complex, transformer wheel that is being used everywhere. Why people do that? Because in this world, the wheel was not invented as an idea; it was invented as an artifact and the complexity of artifact grows as it collects all attachements it has ever been attached to.

So here is my non-complete motivations:

* A small repository that one can simply `make` to get plain TeX, actually pdfTeX
* Adapt in mondern C, cut away the legacy memory and string handling
* Refactor so parts the algorithm and functions can be easily taken out to other projects

## Musing

* I am a fan of literate programming. The good parts:

  ** Explain the intention, not the code

  ** Write code the way you want to write, not the way your language wants you to write

* I don't think it is necessary for literate programming, but I think following are the bad parts the way TeX is done:

  ** A bottom up approach.

     TeX builds up everything from ground up and explains everything from bottom up. Well, not everything is interesting or even relavant. With the bulk of foundations and tying the idea with the foundation, the idea become inaccesible.

     The way we explain to human is nearly always topdown, or abstract. We explain the idea with general assumptions first, and then further explain it by adding deatails, layer by layer.

     We may develop our code bottom-up, but we should write out code top-down.

  ** An abusive case of macros and globals

     Nearly every variable in TeX is global, and all macros are global. There is no way anyone can track all these names.

  ** Confusing the objectives of writing books and writing code

     Ultimately, the goal of writing code is for it to run and the goal of reading code is to understand how it runs. Neither is the objectives of writing a book or reading a book. Knuth probably is more interested in writing books that writing code. I think the result is a bad book and obscured code. There is no way once can quickly zoom into parts of code and quickly understand how the code works by flipping a 500-page book.

  ** The output of code from WEB (by tangle) is unreadable.
     The meta-form of literate programming and the code output for the compiler holds different aspects of the same code. While the former is better for comprehension, it is clearer to double check and debug in the latter. There is no reason the output from literate programming should be any different from a code that one would write directly. The way WEB does is to focus on the front side and leave a total mess to the back side -- that is wrong.

     
