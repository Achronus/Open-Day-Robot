
"use strict";

let Acknowledgment = require('./Acknowledgment.js')
let ListMaps = require('./ListMaps.js')
let SetPOI = require('./SetPOI.js')
let GetMapConfiguration = require('./GetMapConfiguration.js')
let FinalApproachPose = require('./FinalApproachPose.js')
let DisableEmergency = require('./DisableEmergency.js')
let GetNodes = require('./GetNodes.js')
let SafetyZone = require('./SafetyZone.js')
let GetSubMap = require('./GetSubMap.js')
let RenameMap = require('./RenameMap.js')
let VisualLocRecognize = require('./VisualLocRecognize.js')
let ChangeBuilding = require('./ChangeBuilding.js')
let SaveMap = require('./SaveMap.js')
let SetMapConfiguration = require('./SetMapConfiguration.js')
let GetPOI = require('./GetPOI.js')
let SetSubMapFloor = require('./SetSubMapFloor.js')

module.exports = {
  Acknowledgment: Acknowledgment,
  ListMaps: ListMaps,
  SetPOI: SetPOI,
  GetMapConfiguration: GetMapConfiguration,
  FinalApproachPose: FinalApproachPose,
  DisableEmergency: DisableEmergency,
  GetNodes: GetNodes,
  SafetyZone: SafetyZone,
  GetSubMap: GetSubMap,
  RenameMap: RenameMap,
  VisualLocRecognize: VisualLocRecognize,
  ChangeBuilding: ChangeBuilding,
  SaveMap: SaveMap,
  SetMapConfiguration: SetMapConfiguration,
  GetPOI: GetPOI,
  SetSubMapFloor: SetSubMapFloor,
};
