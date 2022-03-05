"use strict";

/*
const bookings = [];
const createBooking = function (filghtNum, numPassengers = 1, price = "$1999") {
  // ES5 - Way
  //   numPassengers = numPassengers || 1;
  //   price = price || "$1999";
  const booking = {
      filghtNum,
      numPassengers,
      price,
    };
    console.log(booking);
    bookings.push(booking);
};

createBooking("LH123");
createBooking("LH123", undefined, "$2000");

const flight = "LM234";
const jonas = {
    name: "vedant yetekar",
    passport: 77218,
};

const checkIn = function (flightNum, passenger) {
    flightNum = "LH999";
    passenger.name = "Mr. " + passenger.name;
    
    if (passenger.passport === 77218) {
        alert("Check in");
    } else {
        alert("Wrong passport");
    }
};

checkIn(flight, jonas);
console.log(flight);
console.log(jonas);

// Is the same as doing
// const flightNum = flight;
// const passenger = jonas;

const newPassport = function (person) {
    person.passport = Math.trunc(Math.random() * 10000000);
};

newPassport(jonas);
checkIn(flight, jonas);
console.log(jonas);


// Example (in javascript there is no pass by reference.)
const obj1 = { name: "vedant", rollNo: 22, age: 19 };

const var1 = 22;

const tp = function (obj, var1) {
    var1 = 100;
    obj1.name = "ram";
};

tp(obj1, var1);
console.log(var1);
console.log(obj1);


const oneWord = function (str) {
    return str.replace(/ /g, "").toLowerCase();
};

const upperFirstWord = function (str) {
  const [first, ...other] = str.split(" ");
  return [first.toUpperCase(), ...other].join(" ");
};

const transformer = function (str, fn) {
    console.log(`Original string : ${str}`);
    console.log(`Transformed String : ${fn(str)}`);
    console.log(`Transformed By : ${fn.name}`);
};
transformer("JavaScript is the best...", upperFirstWord);


const high5 = () => console.log("👋");

document.body.addEventListener("click", high5);
["vedant", "parth", "advait"].forEach(high5);


const greet = function (greeting) {
    return function (name) {
        console.log(`${greeting} ${name}`);
    };
};

const greeterHey = greet("hey");

greeterHey("vedant");
greet("hello")("vedant");

// Challenge
const greetArr = (greeting) => (name) => console.log(`${greeting} ${name}`);
greetArr("hiiiiiiiii")("vedant");


// Call and apply methods
const lufthansa = {
    airline: "luthansa",
    iataCode: "LH",
    bookings: [],
    book(flightNum, name) {
        console.log(
            `${name} booked a seat on ${this.airline} flight ${this.iataCode}${flightNum}`
            );
            this.bookings.push({ flight: `${this.iataCode}${flightNum}`, name });
        },
    };
    
    lufthansa.book(223, "vedant yetekar");
    lufthansa.book(224, "Jonas");
    console.log(lufthansa);
    
    const book = lufthansa.book;
    const euroWings = {
        airline: "EuroWings",
        iataCode: "EW",
        bookings: [],
        book,
    };
    
    // book(23, "Jay"); (doesn't work)
    book.call(euroWings, 23, "Jay");
    book.call(lufthansa, 222, "Vedant");
    
    const swiss = {
        airline: "Swiss Air Lines",
        iataCode: "LX",
        bookings: [],
        book,
    };
    
    book.call(swiss, 24, "advait");
    
    // Apply method
    const flightData = [523, "jonas schmedtmann"];
    book.apply(swiss, flightData);
    
    book.call(swiss, ...flightData);
    
    // BIND Method
    const bookEw = book.bind(euroWings);
    const bookLH = book.bind(lufthansa);
    const bookLX = book.bind(swiss);
    
    bookEw(833, "Vedant Yetekar");
    
    const bookEw23 = book.bind(euroWings, 23);
    bookEw23("Jonas");
    bookEw23("VEDANT");
    
    // with event listeners
    lufthansa.planes = 300;
    lufthansa.buyPlane = function () {
        console.log(this);
        this.planes++;
        console.log(this.planes);
    };
    
    document
    .querySelector(".buy")
    .addEventListener("click", lufthansa.buyPlane.bind(lufthansa));
    
    // Partial method
    
    const addTax = (rate, value) => value + value * rate;
    console.log(addTax(0.1, 200));
    const addVAT = addTax.bind(null, 0.23);
    console.log(addVAT(100));
    // addVAT = (value) => value + value * 0.23;
    
    // challenge
    
    const addTaxRate = function (rate) {
        return function (value) {
            console.log(value + value * rate);
        };
    };
    
    const addVAT2 = addTaxRate(0.23);
    console.log(addVAT2(100));
    
    
    
    Let's build a simple poll app!
    A poll has a question, an array of options from which people can choose, and an
    array with the number of replies for each option. This data is stored in the starter
    'poll' object below.
    Your tasks:
    1. Create a method called 'registerNewAnswer' on the 'poll' object. The
    method does 2 things:
    1.1. Display a prompt window for the user to input the number of the
    selected option. The prompt should look like this:
    What is your favourite programming language?
    0: JavaScript
    1: Python
    2: Rust
    3: C++
    (Write option number)
1.2. Based on the input number, update the 'answers' array property. For
example, if the option is 3, increase the value at position 3 of the array by
1. Make sure to check if the input is a number and if the number makes
sense (e.g. answer 52 wouldn't make sense, right?)
2. Call this method whenever the user clicks the "Answer poll" button.
3. Create a method 'displayResults' which displays the poll results. The
method takes a string as an input (called 'type'), which can be either 'string'
or 'array'. If type is 'array', simply display the results array as it is, using
console.log(). This should be the default option. If type is 'string', display a
string like "Poll results are 13, 2, 4, 1".
4. Run the 'displayResults' method at the end of each
'registerNewAnswer' method call.
5. Bonus: Use the 'displayResults' method to display the 2 arrays in the test
data. Use both the 'array' and the 'string' option. Do not put the arrays in the poll
object! So what should the this keyword look like in this situation?
The Complete JavaScript Course 21
Test data for bonus:
§ Data 1: [5, 2, 3]
§ Data 2: [1, 5, 3, 9, 6, 1]
Hints: Use many of the tools you learned about in this and the last section �
GOOD LUCK �

const poll = {
    question: "What is your favourite programming language?",
    options: ["0: JavaScript", "1: Python", "2: Rust", "3 : C++"],
    answers: new Array(4).fill(0),
    registerNewAnswer() {
        const answer = Number(
            prompt(
                `${this.question}\n${this.options.join("\n")}\n(Write option number)`
                )
                );
                
                typeof answer === "number" &&
                answer < this.answers.length &&
                this.answers[answer]++;
                
                this.displayResults("number");
                this.displayResults();
            },
            displayResults(type = "array") {
                if (type === "array") {
                    console.log(this.answers);
                } else if (type === "string") {
                    console.log(`Poll results are ${this.answers.join(", ")}`);
                }
            },
        };
        
        document
        .querySelector(".poll")
        .addEventListener("click", poll.registerNewAnswer.bind(poll));
        
        poll.displayResults.call({ answers: [5, 2, 3] });
        poll.displayResults.call({ answers: [5, 2, 3] }, "string");
        poll.displayResults.call({ answers: [1, 5, 3, 9, 6, 1] });
        
        // [5, 2, 3]
        // [1, 5, 3, 9, 6, 1]
        
        
        // IIFE (immediatley invoked function expressions)
        
        (function () {
            console.log("This will never run again...");
            const isPrivate = 23;
        })();
        
        console.log(isPrivate);
        
        // (() => console.log(`This will ALSO never run again...`))();
        
        {
            const isPrivate = 23;
            var notPrivate = 222;
        }
        // console.log(isPrivate);
        console.log(notPrivate);
        
        
        // Closures
        
        
        const secureBooking = function () {
            let passengerCount = 0;
            
            return function () {
                passengerCount++;
                console.log(`${passengerCount} passengers`);
            };
        };
        
        const booker = secureBooking();
        booker();
        
        console.dir(booker);
        
        
        //Example 1
let f;

const g = function () {
    const a = 23;
    f = function () {
    console.log(a * 2);
};
};

const h = function () {
    const b = 777;
    f = function () {
        console.log(b * 2);
    };
};

g();
f();
console.dir(f);

// Reassigned f function
h();
f();

console.dir(f);


// Example 2

const boardPassengers = function (n, wait) {
    const perGroup = n / 3;
    
    setTimeout(function () {
    console.log(`We're now boarding all ${n} passengers`);
    console.log(`There are 3 groups each with ${perGroup} passengers`);
}, wait * 1000);

  console.log(`Will start boarding in ${wait} seconds`);
};

const perGroup = 1000;
boardPassengers(180, 1);


// Coding Challenge #2
This is more of a thinking challenge than a coding challenge �
Your tasks:
1. Take the IIFE below and at the end of the function, attach an event listener that
changes the color of the selected h1 element ('header') to blue, each time
the body element is clicked. Do not select the h1 element again!
2. And now explain to yourself (or someone around you) why this worked! Take all
the time you need. Think about when exactly the callback function is executed,
and what that means for the variables involved in this example.

(function () {
  const header = document.querySelector("h1");
  header.style.color = "red";
  document.querySelector("body").addEventListener("click", function () {
      header.style.color = "blue";
    });
})();

*/
