// FETCH API METHOD

const btn = document.getElementById("get_data");

const fetchData = () =>
  fetch("https://dummyjson.com/quotes")
    .then((response) => response.json())
    .then((data) => {
      const quotesArr = data.quotes;
      const randInt = Math.floor(Math.random() * 31);
      document.getElementById("data").innerHTML = quotesArr[randInt].quote;
      document.getElementById(
        "by"
      ).innerHTML = `... ${quotesArr[randInt].author}`;
    });

btn.addEventListener("click", fetchData);
