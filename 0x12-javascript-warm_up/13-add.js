#!/usr/bin/node
// add.js
function add(a, b) {
  return a + b;
}

const add = require('./add');

console.log(add(3, 4)); // Output: 7
console.log(add(10, 20)); // Output: 30

module.exports = add;

