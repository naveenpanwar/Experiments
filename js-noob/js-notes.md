#SuperHero Javascript
 This Notes Files in Following [SuperHero JS](www.superherojs.com)
## Beginning Notes
 * **this** is always the first argument to a function in JS
   >to "desugar" is to take a convenient syntax and describe it in terms of a more basic core primitive
 * The short version is: **a function invocation like fn(...args) is the same as fn.call(window [ES5-strict: undefined], ...args)**
 * ```
   var person = {  
     name: "Brendan Eich",  
     hello: function(thing) {  
       console.log(this + " says hello " + thing);  
     }  
   }  

   // this:
   person.hello("world")

   // desugars to this:
   person.hello.call(person, "world");
   ```

##Modern Javascript
###Modules
 * Immediately Invoked Function Expression (IIFE)
 * 
