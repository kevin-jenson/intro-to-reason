type timeout;
[@bs.val] external setTimeout: (unit => unit, int) => timeout = "setTimeout";
[@bs.val] external clearTimeout: timeout = "clearTimeout";

[@bs.val] [@bs.scope "Math"] external random: int => float = "";

[@bs.scope ("window", "location", "ancestorOrigins")] [@bs.val]
external len: int = "length";

let myMap = Js.Dict.empty();
Js.Dict.set(myMap, "Allison", 10);

[@bs.val] external peopleAge: Js.Dict.t(int) = "";

switch (Js.Dict.get(peopleAge, "Kevin")) {
| None => Js.log("Kevin is not found")
| Some(age) => Js.log("Kevin is " ++ string_of_int(age))
};

type person = {
  .
  "name": string,
  "age": int,
  "lastName": string,
};

[@bs.val] external getPerson: unit => person = "";

[@bs.deriving abstract]
type testRecord = {
  [@bs.as "type"]
  test: string,
  [@bs.as "test"]
  test2: string,
  [@bs.optional]
  test3: string,
};

[@bs.val] external printTest: testRecord => unit = "";

let testRecord = testRecord(~test="Hey", ~test2="Hello", ());

printTest(testRecord);

type t;
[@bs.new] external createDate: unit => t = "Date";

let date = createDate();

Js.log(date);

class type _rect =
  [@bs]
  {
    [@bs.set]
    pub height: int;
    [@bs.set]
    pub width: int;
    pub draw: unit => unit;
  };

type rect = Js.t(_rect);

type math;
[@bs.val] external math: math = "Math";
[@bs.send] external rnd: (math, int) => float = "random";

Js.log(rnd(math, 23));

[@bs.module "path"] external dirname: string => string = "";

Js.log(dirname(""));

[@bs.deriving {jsConverter: newType}]
type difPerson = {
  name: string,
  age: int,
  lastName: string,
};

[@bs.val] external getPerson: unit => abs_difPerson = "";

let pr = difPersonFromJs(getPerson());

Js.log(pr.name);