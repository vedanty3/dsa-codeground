// AJAX: Asynchronous JavaScript And XML
const btn = document.getElementById("get_data");

const getData = () => {
  const xhttp = new XMLHttpRequest();
  xhttp.onreadystatechange = function () {
    if (this.readyState == 4 && this.status == 200) {
      const parsedData = JSON.parse(this.responseText);
      const quotesArr = parsedData.quotes;
      const randInt = Math.floor(Math.random() * 31);
      document.getElementById("data").innerHTML = quotesArr[randInt].quote;
      document.getElementById(
        "by"
      ).innerHTML = `... ${quotesArr[randInt].author}`;
    }
  };

  xhttp.open("GET", "https://dummyjson.com/quotes", true);
  xhttp.send();
};

btn.addEventListener("click", getData);
