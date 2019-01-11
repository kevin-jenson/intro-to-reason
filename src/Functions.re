let add = (a, b) => a + b;

let addWithFunction = (a, b) => a() + b;

let addWithScope = (a, b) => {
  a + b;
};

let rec factorial = x =>
  switch (x) {
  | x when x <= 2 => x
  | x => x * factorial(x - 1)
  };

let a = (a, ()) => {
  Js.log("hello" ++ a);
};

let computation = (~x, ~y, ~z) => x + y / z;

let crossProduct = (~vector1 as (a1, a2, a3), ~vector2 as (b1, b2, b3)) => (
  a2 * b3 - a3 * b2,
  a3 * b1 - a1 * b3,
  a1 * b2 - a2 * b1,
);

let addOptional = (~x=?, ~y=?, ()) => {
  switch (x, y) {
  | (Some(x), Some(y)) => x + y
  | (Some(x), None) => x
  | (None, Some(y)) => y
  | (None, None) => 0
  };
};

let addDefault = (~x=0, ~y=0, ()) => x + y;

let someFn = (a: option('a)) => a;
let result = None;

addDefault(~x=?someFn(Some(12)), ~y=?result);

List.sort(
  compare,
  List.filter(x => x < 5, List.map(x => x + 1, [4, 2, 1, 3, 5])),
);

[4, 2, 1, 5]
|> List.map(x => x + 1)
|> List.filter(x => x < 5)
|> List.sort(compare);

let someTuppleFn = tupple =>
  switch (tupple) {
  | (_, 0) => (-1)
  | (x, y) => x / y
  };

let difTuppleFn =
  fun
  | (_, 0) => (-1)
  | (x, y) => x / y;

let (@-) = (a, b) => a - b;

Js.log(2 @- 3);