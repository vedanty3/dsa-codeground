// "use strict";
/*
let hasDriversLicense = false;
const passTest = true;

if (passTest) {
    hasDriversLicense = true;
}
if (hasDriversLicense) {
    console.log("I can drive :D");
}


// const interface = "Audio";   reserved word
// const private = 66;          reserved word



function logger() {
    console.log("My name is Vedant :D");
}
logger();
logger();
logger();


function fruitProcessor(apples, oranges) {
    console.log(apples, oranges);
    const juice = `Juice with ${apples} apples and ${oranges} oranges.`;
    return juice;
}

fruitProcessor(2, 3);
const finalJuice = fruitProcessor(5, 0);
console.log(finalJuice);
console.log(fruitProcessor(5, 6));




// function declaration
const age1 = calcAge1(2003);              // you can call functions declarations before they are declared.
function calcAge1(birthYear) {
    return 2021 - birthYear;
}




// function expression
const calcAge2 = function (birthYear) {
    return 2021 - birthYear;
}
const age2 = calcAge2(2003);       // you can "not" call functions expression before they are declared (initialised).
console.log(age1, age2);



// arrow functions
const calcAge = birthYear => 2021 - birthYear;
const age = calcAge(2003);
console.log(age);


const yearsUntilRetirement = (birthYear, firstName) => {
    const age = 2021 - birthYear;
    const retirement = 65 - age;
    // return retirement;
    return `${firstName} retires in ${retirement} years.`;
}

console.log(yearsUntilRetirement(1991, "Jonas"));
console.log(yearsUntilRetirement(2003, "Vedant"));





function cutFruitPieces(fruit) {
    return fruit * 4;
}

function fruitProcessor(apples, oranges) {
    const applePieces = cutFruitPieces(apples);
    const orangePieces = cutFruitPieces(oranges);
    const juice = `Juice with ${applePieces} pieces of apples and ${orangePieces} pieces of orange.`;
    return juice;
}


const finalJuice = fruitProcessor(6, 7);
console.log(finalJuice);




const calcAverage = (s1, s2, s3) => (s1 + s2 + s3) / 3;
const scoreDolphins = calcAverage(44, 23, 71);
const scoreKoalas = calcAverage(65, 54, 49);
console.log(scoreDolphins, scoreKoalas);

function checkWinner(scoreDolphins, scoreKoalas) {
    if (2 * scoreKoalas >= scoreDolphins) {
        console.log("Dolphins Win !");
    }
    else if (2 * scoreDolphins >= scoreKoalas) {
        console.log("Dolphins Win !");
    }
    else {
        console.log("No Team Wins");
    }
}
checkWinner();




const friends = ["Michael", "Steven", "Peter"];
console.log(friends);


const years = new Array(1991, 2003, 2000, 2020);
console.log(friends[0]);
console.log(friends[2]);
console.log(friends.length);
console.log(friends[friends.length - 1]);

friends[2] = "Jay";
console.log(friends);


const vedant = ["Vedant", "Yetekar", 2003 - 2021, "SDE", friends];
console.log(vedant);
console.log(vedant.length);





const calcAge2 = function (birthYear) {
    return 2021 - birthYear;
}
const years = [2003, 1991, 2002, 2010, 2004];
console.log(calcAge2(years));



const age1 = calcAge2(years[0]);
const age2 = calcAge2(years[1]);
const age3 = calcAge2(years[years.length - 1]);
console.log(age1, age2, age3);
const ages = [calcAge2(years[0]), calcAge2(years[1]), calcAge2(years[years.length - 1])];
console.log(ages);


const friends = ['Jonas', 'Jay', 'Joy'];
const newLength = friends.push('Joseph');
console.log(friends);
console.log(newLength);
friends.unshift('John');
console.log(friends);
console.log(newLength);



// remove elements
console.log(friends);
const popped = friends.pop(); // removeslast element
const first = friends.shift(); // removes first element
console.log(popped);
console.log(first);



const friends = ['Jonas', 'Jay', 'Joy'];
console.log(friends.indexOf('Jay'));
console.log(friends.indexOf('Bob'));
console.log(friends.includes('Jonas'));
console.log(friends.includes('Bob'));




// coding challenge
const calcTip = function (bill) {
  return bill >= 50 && bill <= 300 ? bill * 0.15 : bill * 0.2;
};

// const calcTip = (bill) =>
//   bill >= 50 && bill <= 300 ? bill * 0.15 : bill * 0.2;

const bills = [125, 555, 44];
const tips = [calcTip(bills[0]), calcTip(bills[1]), calcTip(bills[2])];
const totals = [bills[0] + tips[0], bills[1] + tips[1], bills[2] + tips[2]];
console.log(bills, tips, totals);



// Objects

const vedant = {
  firstName: 'Vedant',
  lastName: 'Yetekar',
  age: 2021 - 2003,
  job: 'Student',
  friends: ['Virender', 'Advait', 'Sanket'],
};

console.log(vedant);
console.log(vedant.lastName);
console.log(vedant['lastName']);

const nameKey = 'Name';
console.log(vedant['first' + nameKey]);
console.log(vedant['last' + nameKey]);

const interestedIn = prompt(
  'What do you want to know about Vedant ? \n\
Choose between firstName, lastName, age, job and friends'
);

if (vedant[interestedIn]) {
  console.log(vedant[interestedIn]);
} else {
  console.log(
    "Wrong request!\n\
Choose between firstName, lastName, age, job and friends'"
  );
}

vedant.location = 'India';
console.log(vedant);

console.log(
  `${vedant.firstName} has ${vedant.friends.length} friends, and his best friend is called ${vedant.friends[0]}.`
);




const vedant = {
  firstName: 'Vedant',
  lastName: 'Yetekar',
  birthYear: 2003,
  job: 'Student',
  friends: ['Virender', 'Advait', 'Sanket'],
  hasDriversLicense: true,

  //   calcAge: function (birthYear) {
  //     return 2021 - birthYear;
  //   }

  //   calcAge: function () {
  //     console.log(this);
  //     return 2021 - this.birthYear;
  //   }

  calcAge: function () {
    this.age = 2021 - this.birthYear;
    return this.age;
  },

  getSummary: function () {
    if (this.hasDriversLicense == true) {
      console.log(
        `Vedant is a ${this.calcAge()} years old ${
          this.job
        }, and he has a driving license.`
      );
    } else {
      console.log(
        `Vedant is a ${this.calcAge()} years old ${
          this.job
        }, and he has no driving license.`
      );
    }
  },
};

// const age = vedant.calcAge(vedant.birthYear);
// console.log(age);

// console.log(vedant.calcAge(vedant.birthYear));

// console.log(vedant['calcAge'](vedant['birthYear']));

// console.log(vedant['calcAge'](vedant.birthYear));

// console.log(vedant.calcAge());

// console.log(vedant.calcAge());
// console.log(vedant.age);

console.log(vedant.getSummary());



const mark = {
  fullName: 'Mark Miller',
  mass: 78,
  height: 1.69,
  calcBMI: function () {
    this.BMI = this.mass / this.height ** 2;
    return this.BMI;
  },
};

const john = {
  fullName: 'John Smith',
  mass: 92,
  height: 1.95,
  calcBMI: function () {
    this.BMI = this.mass / this.height ** 2;
    return this.BMI;
  },
};

mark.calcBMI();
john.calcBMI();
// console.log(mark.BMI, john.BMI);
// console.log(mark);

if (mark.BMI > john.BMI) {
  console.log(
    `${mark.fullName}'s BMI (${mark.BMI}) is higher than ${john.fullName}'s BMI (${john.BMI})`
  );
} else {
  console.log(
    `${john.fullName}'s BMI (${john.BMI}) is higher than ${mark.fullName}'s BMI (${mark.BMI})`
  );
}


for (let i = 1; i <= 10; i++) {
  console.log(`Lifting weights repetition ${i}`);
}



const array = [
  'Vedant',
  'Yetekar',
  'VIIT, Pune',
  'Programmer',
  18,
  ['Virendra', 'Advait'],
];

const types = [];

for (let i = 0; i < array.length; i++) {
  // console.log(array[i], typeof array[i]);
  // types[i] = typeof array[i];
  // types.push(typeof array[i]);
  types.unshift(typeof array[i]);
}
console.log(types);
types.unshift('hello world');
console.log(types);




const birthYears = [2003, 2006, 1967, 1977];
const ages = [];

for (let i = 0; i < birthYears.length; i++) {
  ages.push(2021 - birthYears[i]);
}

console.log(ages);





const array = [
  'Vedant',
  'Yetekar',
  'VIIT, Pune',
  'Programmer',
  18,
  ['Virendra', 'Advait'],
];

for (let i = 0; i < array.length; i++) {
  if (typeof array[i] !== 'string') {
    continue;
  }
  console.log(array[i]);
}

for (let i = 0; i < array.length; i++) {
  if (typeof array[i] === 'object') {
    break;
  }
  console.log(array[i]);
}





const array = [
  'Vedant',
  'Yetekar',
  'VIIT, Pune',
  'Programmer',
  18,
  ['Virendra', 'Advait'],
];

for (let i = array.length - 1; i >= 0; i--) {
  console.log(array[i]);
}






for (let i = 1; i < 4; i++) {
  console.log(`------- Starting Exercise ${i} --------`);

  for (let j = 1; j < 6; j++) {
    console.log(`Lifting weight repetition ${j}`);
  }
}







let i = 1;
while (i <= 10) {
  console.log(`While Loop : Lifting weights repetition ${i}.`);
  i++;
}

console.log(dice);

let dice = 1;
while (dice != 6) {
  console.log(`You rolled a ${dice}`);
  dice = Math.trunc(Math.random() * 6) + 1;
  if (dice === 6) {
    console.log(`Loop is about to end...`);
  }
}






// coding challenge
const bills = [22, 295, 176, 440, 37, 105, 10, 1100, 86, 52];

const tip = [];
const total = [];

const calcTip = function (bill) {
  return bill >= 50 && bill <= 300 ? bill * 0.15 : bill * 0.2;
};

for (let i = 0; i < bills.length; i++) {
  tip.push(calcTip(bills[i]));
  total.push(tip[i] + bills[i]);
}

console.log(total);

function calcAverage(total) {
  let sum = 0;
  for (let i = 0; i < total.length; i++) {
    sum += total[i];
  }
  const avg = sum / total.length;
  return avg;
}

console.log(calcAverage(total));




const temps = [22, 33, 33, 34, 24, 43];
let min = temps[0];
let max = temps[0];
function minMax(temps) {
  for (let i = 0; i < temps.length; i++) {
    if (min > temps[i]) {
      min = temps[i];
    }
    if (max < temps[i]) {
      max = temps[i];
    }
  }
  // debugger;
  // console.log('Minimum : ', min, 'Maximum : ', max);
  // console.warn('Minimum : ', min, 'Maximum : ', max);
  // console.error('Minimum : ', min, 'Maximum : ', max);
  console.log('Amplitude : ', max - min);
}

minMax(temps);





const measurement = {
  type: 'Temperature',
  unit: 'Degree celcius',
  value: prompt('Enter temperature in degree celcius : '),
};

function calcKelvin(measurement) {
  const newtemp = Number(measurement.value) + 273.16;
  return newtemp;
}

console.log(
  'Temperature in degree celcius is : ',
  calcKelvin(measurement),
  ' C'
);




*/
const calcAge2 = function (birthYear) {
  return 2021 - birthYear;
};
const years = [2003, 1991, 2002, 2010, 2004];
console.log(calcAge2(...years));
