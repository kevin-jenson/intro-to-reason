// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var Pervasives = require("bs-platform/lib/js/pervasives.js");
var Functor$MyNewProject = require("./Functor.bs.js");

var Count = /* module */[/* count */3];

var Repeat = Functor$MyNewProject.Make(Count);

Pervasives.print_string(Curry._2(Repeat[/* repeat */0], undefined, "abc\n"));

exports.Count = Count;
exports.Repeat = Repeat;
/* Repeat Not a pure module */
