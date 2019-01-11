type person = {
  name: string,
  age: int,
};

let whoami = {name: "Kevin", age: 22};

let b = (a, b) => a + b;

let a = 12 + 34;

let greetings = "hello";
let helloWorld = {j|$greetings, kevin|j};

let a = {
  let greeting = "hello";
  let world = "world";
  greeting ++ world;
};

let person = {age: 34, name: "Kevin Jenson"};

Js.log("Hello, BuckleScript and Reason!");

let a = if (true) {"Hello"} else {"asdfa;sljd"};

type rocketDestination('a) = {
  destinationName: string,
  constellation: string,
  coordinates: celestialCoordinates('a),
}
and celestialCoordinates('a) = {
  ra: ('a, 'a, 'a),
  dEc: ('a, 'a, 'a),
};

let marsDestination = {
  destinationName: "Mars",
  constellation: "Pisces",
  coordinates: {
    ra: (1, 2, 3),
    dEc: (2, 3, 4),
  },
};

let {coordinates} = marsDestination;

let tup = (1, 2);
let (_, _) = tup;

type serverResponse =
  | Response
  | Error
  | Loading;
/* let isServerError = response: Response =>  */

let result =
  switch (1, 3) {
  | (1, y) => "First " ++ string_of_int(y)
  | (x, 0)
  | (0, x) => "first or second" ++ string_of_int(x)
  | (8, x) as tup =>
    let (y, _) = tup;
    "Hey (" ++ string_of_int(y) ++ "," ++ string_of_int(x) ++ ")";
  | (x, y) => string_of_int(x + y)
  };

let reverseNum = num => {
  let (first, second) = (num mod 10, num / 10);
  first * 10 + second;
};

let crossProduct = (vector1, vector2) => {
  let (a1, a2, a3) = vector1;
  let (b1, b2, b3) = vector2;
  (a2 * b3 - a3 * b2, a3 * b1 - a1 * b3, a1 * b2 - a2 * b1);
};

let addVectors = ((a1, a2, a3), (b1, b2, b3)) => (
  a1 + b1,
  a2 + b2,
  a3 + b3,
);

Js.log(addVectors((1, 2, 3), (1, 2, 3)));

type binaryTree('a) =
  | Empty
  | Node(node('a))
and node('a) = {
  value: 'a,
  left: binaryTree('a),
  right: binaryTree('a),
};