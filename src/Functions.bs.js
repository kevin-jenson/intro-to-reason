// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");
var Curry = require("bs-platform/lib/js/curry.js");
var Caml_obj = require("bs-platform/lib/js/caml_obj.js");
var Caml_int32 = require("bs-platform/lib/js/caml_int32.js");

function add(a, b) {
  return a + b | 0;
}

function addWithFunction(a, b) {
  return Curry._1(a, /* () */0) + b | 0;
}

function addWithScope(a, b) {
  return a + b | 0;
}

function factorial(x) {
  if (x <= 2) {
    return x;
  } else {
    return Caml_int32.imul(x, factorial(x - 1 | 0));
  }
}

function a(a$1, param) {
  console.log("hello" + a$1);
  return /* () */0;
}

function computation(x, y, z) {
  return x + Caml_int32.div(y, z) | 0;
}

function crossProduct(param, param$1) {
  var b3 = param$1[2];
  var b2 = param$1[1];
  var b1 = param$1[0];
  var a3 = param[2];
  var a2 = param[1];
  var a1 = param[0];
  return /* tuple */[
          Caml_int32.imul(a2, b3) - Caml_int32.imul(a3, b2) | 0,
          Caml_int32.imul(a3, b1) - Caml_int32.imul(a1, b3) | 0,
          Caml_int32.imul(a1, b2) - Caml_int32.imul(a2, b1) | 0
        ];
}

function addOptional(x, y, param) {
  if (x !== undefined) {
    var x$1 = x;
    if (y !== undefined) {
      return x$1 + y | 0;
    } else {
      return x$1;
    }
  } else if (y !== undefined) {
    return y;
  } else {
    return 0;
  }
}

function addDefault($staropt$star, $staropt$star$1, param) {
  var x = $staropt$star !== undefined ? $staropt$star : 0;
  var y = $staropt$star$1 !== undefined ? $staropt$star$1 : 0;
  return x + y | 0;
}

function someFn(a) {
  return a;
}

List.sort(Caml_obj.caml_compare, List.filter((function (x) {
              return x < 5;
            }))(List.map((function (x) {
                return x + 1 | 0;
              }), /* :: */[
              4,
              /* :: */[
                2,
                /* :: */[
                  1,
                  /* :: */[
                    3,
                    /* :: */[
                      5,
                      /* [] */0
                    ]
                  ]
                ]
              ]
            ])));

List.sort(Caml_obj.caml_compare, List.filter((function (x) {
              return x < 5;
            }))(List.map((function (x) {
                return x + 1 | 0;
              }), /* :: */[
              4,
              /* :: */[
                2,
                /* :: */[
                  1,
                  /* :: */[
                    5,
                    /* [] */0
                  ]
                ]
              ]
            ])));

function someTuppleFn(tupple) {
  var y = tupple[1];
  if (y !== 0) {
    return Caml_int32.div(tupple[0], y);
  } else {
    return -1;
  }
}

function difTuppleFn(param) {
  var y = param[1];
  if (y !== 0) {
    return Caml_int32.div(param[0], y);
  } else {
    return -1;
  }
}

function $at$neg(a, b) {
  return a - b | 0;
}

console.log(-1);

var result = undefined;

exports.add = add;
exports.addWithFunction = addWithFunction;
exports.addWithScope = addWithScope;
exports.factorial = factorial;
exports.a = a;
exports.computation = computation;
exports.crossProduct = crossProduct;
exports.addOptional = addOptional;
exports.addDefault = addDefault;
exports.someFn = someFn;
exports.result = result;
exports.someTuppleFn = someTuppleFn;
exports.difTuppleFn = difTuppleFn;
exports.$at$neg = $at$neg;
/*  Not a pure module */
