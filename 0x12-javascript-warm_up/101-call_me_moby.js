#!/usr/bin/node
// repeatFunction.js
function repeatFunction(x, theFunction) {
  for (let i = 0; i < x; i++) {
    theFunction();
  }
}

module.exports = repeatFunction;

