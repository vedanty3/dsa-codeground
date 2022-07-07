// Promises

const promise = (isSuccess) => {
  return new Promise((resolve, reject) => {
    if (isSuccess) resolve("Success");
    else reject("Failed");
  });
};

promise(true)
  .then((resolve) => console.log(resolve))
  .catch((error) => console.log(error));
