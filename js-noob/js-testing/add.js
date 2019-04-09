
// Expectations
//
// We have three expectations of a simple add function and we satisfy these expectations
// by refactoring the funcion once the test fails
//
// Expect 2+3 = 5
function add(x, y) {
  return x+y;
}

// Expect error when non numbers are passed
function add(x, y) {
  if (typeof x && typeof y) !== 'number'){
    throw new Error('Params must be a number.');
  }
  return x+y;
}

// Expect 0.1 + 0.2 = 0.3
function add(x, y) {
  var result;
  if (typeof x && typeof y) !== 'number'){
    throw new Error('Params must be a number.');
  }
  
  result = x+y;
  if (parseInt(result) !== result) {
    result = parseFloat(result.toFixed(1));
  }

  return result;
}
