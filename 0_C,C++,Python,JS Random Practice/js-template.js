// npm install prompt-sync
// Let's solve problems and make life easy

const prompt = require("prompt-sync")();

function sum(a, b) {
    return a + b;
}


let a, b;
a = parseInt(prompt('Enter a number: '))
b = parseInt(prompt('Enter another number: '))

const result = sum(a, b);
console.log("sum is: ", result);
