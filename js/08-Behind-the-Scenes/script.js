"use strict";

// Scoping in Practice

/*
function calcAge(birthYear) {
  const age = 2037 - birthYear;
  
  function printAge() {
    let output = `${firstName}, you are ${age}, born in ${birthYear}`;
    console.log(output);

    if (birthYear >= 1981 && birthYear <= 1996) {
      var millenial = true;
      // Creating NEW variable with same name as outer scope's variable
      const firstName = 'Steven';

      // Reasssigning outer scope's variable
      output = 'NEW OUTPUT!';

      const str = `Oh, and you're a millenial, ${firstName}`;
      console.log(str);

      function add(a, b) {
        return a + b;
      }
    }
    // console.log(str);
    console.log(millenial);
    // console.log(add(2, 3));
    console.log(output);
  }
  printAge();

  return age;
}

const firstName = 'Jonas';
calcAge(1991);
// console.log(age);
// printAge();

*/

/*
variables
console.log(me);
console.log(job);
console.log(year);
var me = 'vedant';
let job = 'student';
const year = '2003';

functions
console.log(add(2, 3));
console.log(addExp(2, 3));
console.log(addArrow(2, 3));

function add(a, b) {
  return a + b;
}

// below both functions are in temporal dead zone
var addExp = function (a, b) {
  return a + b;
};

var addArrow = (a, b) => a + b;

example
console.log(numProducts);
if (!numProducts) {
  deleteShoppingCart();
}
var numProducts = 10;
function deleteShoppingCart() {
  console.log('All products deleted!');
}

var x = 1;
let y = 2;
const z = 3;

console.log(x === window.x);
console.log(y === window.x);
console.log(z === window.x);

const name = prompt("what's your name?");
alert(`hello, ${name}`);




// the this keyword
console.log(this);

const calcAge = function (birthYear) {
  console.log(2021 - birthYear);
  console.log(this);
};

calcAge(2003);

const calcAgeArrow = birthYear => {
  console.log(2021 - birthYear);
  console.log(this);
};

calcAgeArrow(2003);

const vedant = {
  year: 2003,
  favColor: 'green',
  calcAge: function () {
    console.log(this);
    console.log(2021 - this.year);
  },
};

vedant.calcAge();

const matilda = { year: 2017 };
matilda.calcAge = vedant.calcAge;
matilda.favColor = vedant.favColor;
console.log(matilda.favColor);

const f = vedant.calcAge;




const vedant = {
  firstName: "Vedant",
  year: 2003,
  favColor: "green",
  calcAge: function () {
    console.log(this);
    console.log(2021 - this.year);
    const self = this;
    
    // solution 1 (arrow function uses this key word of its parents scope)
    const isMillenial = () => {
      console.log(this.year >= 1981 && this.year <= 1996);
    };
    isMillenial();
    
    // solution 2
    // const isMillenial = function () {
      //   console.log(self.year >= 1981 && self.year <= 1996);
      // };
      // isMillenial();
    },
    greet: () => console.log(`hey ${this.firstName}`),
  };
  
  vedant.greet();
  vedant.calcAge();
  
  const addExp = function (a, b) {
    console.log(arguments);
    return a + b;
  };
  
  const addArrow = (a, b) => {
    console.log(arguments);
    return a + b;
  };
  
  // addArrow(2, 3);
  addExp(2, 3, 2, 3, 4, 5, 6, 7, 8, 3);
  
  
  // primitive objects
  // let lastName = "Williams";
  // let oldLastName = lastName;
  // lastName = "Davis";
  
  // reference objects
  const jessica = { firstName: "Jessica", lastName: "Williams", age: 27 };
  const jessicaMarried = jessica;
  jessicaMarried.lastName = "Davis";
  console.log("Before Marriage : ", jessica);
  console.log("After Marriage : ", jessicaMarried);
  
  // solution1 (but it creates shallow copy)
  const jessica2 = {
    firstName: "Jessica",
    lastName: "Williams",
    age: 27,
  family: ["Alice", "Bob"],
};
const jessicaCopy = Object.assign({}, jessica2);
jessicaCopy.lastName = "Davis";
jessicaCopy.family = Object.assign([], jessica2.family);
jessicaCopy.family.push("Jennifer");
jessicaCopy.family.push("Jason");
console.log("Before Marriage : ", jessica2);
console.log("After Marriage : ", jessicaCopy);

*/
