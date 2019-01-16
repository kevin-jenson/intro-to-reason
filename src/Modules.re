module ArraysToolbox = {
  let checkPangram = Arrays.isPangram;
};

module Math = {
  module Tools = {
    let times = (x, y) => x * y;
    let square = x => times(x, x);
  };
};

Js.log(Math.Tools.square(3));