module.exports = reqFilter = (req, res, next) => {
  if (!req.query.age) {
    res.send("Please Provide You Age!");
  } else if (req.query.age < 18) {
    res.send("You Cann't Access This Content!");
  } else {
    next();
  }
};
