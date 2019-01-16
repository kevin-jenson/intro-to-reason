module ArraysToolbox = {
  let checkPangram = Arrays.isPangram;
};

module type MathToolsInterface = {
  let times: (int, int) => int;
  let square: int => int;
};

module Math: MathToolsInterface = {
  include Belt;
  let times = (x, y) => x * y;
  let square = x => times(x, x);
};

Js.log();