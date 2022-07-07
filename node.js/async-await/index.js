// Async Await

const btn = document.getElementById("get_data");

const fetchData = async () => {
  const response = await fetch("https://dummyjson.com/quotes");
  const data = await response.json();
  const quotesArr = data.quotes;
  const randInt = Math.floor(Math.random() * 31);
  document.getElementById("data").innerHTML = quotesArr[randInt].quote;
  document.getElementById("by").innerHTML = `... ${quotesArr[randInt].author}`;
};

btn.addEventListener("click", fetchData);
