module ArraysToolbox = {
  let checkPangram = Arrays.isPangram;
};

module type MyInterface = {let t: int => unit;};

module type MathToolsInterface = {
  include MyInterface;
  let times: (int, int) => int;
  let square: int => int;
};

module Math: MathToolsInterface = {
  let t = a => ();
  let times = (x, y) => x * y;
  let square = x => times(x, x);
};

Js.log();

module type Count = {let count: int;};

module Make = (RC: Count) => {
  let rec repeat = (~times=RC.count, str: string) =>
    if (times <= 0) {
      "";
    } else {
      str ++ repeat(~times=times - 1, str);
    };
};