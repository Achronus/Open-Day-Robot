
"use strict";

let ASRActivation = require('./ASRActivation.js');
let TTSstate = require('./TTSstate.js');
let TtsMark = require('./TtsMark.js');
let asrupdate = require('./asrupdate.js');
let I18nText = require('./I18nText.js');
let ASRLanguage = require('./ASRLanguage.js');
let WebGuiEvent = require('./WebGuiEvent.js');
let I18nArgument = require('./I18nArgument.js');
let InputArgument = require('./InputArgument.js');
let ASREvent = require('./ASREvent.js');
let audiosignal = require('./audiosignal.js');
let asrresult = require('./asrresult.js');
let Input = require('./Input.js');
let ASRSrvResponse = require('./ASRSrvResponse.js');
let ASRStatus = require('./ASRStatus.js');
let DirectionOfArrival = require('./DirectionOfArrival.js');
let EnablingSoundLocalisation = require('./EnablingSoundLocalisation.js');
let ASRLangModelMngmt = require('./ASRLangModelMngmt.js');
let AudioDeviceDescription = require('./AudioDeviceDescription.js');
let TtsText = require('./TtsText.js');
let AudioPlayerState = require('./AudioPlayerState.js');
let actiontag = require('./actiontag.js');
let ASRSrvRequest = require('./ASRSrvRequest.js');
let VoiceActivity = require('./VoiceActivity.js');
let SoundResult = require('./SoundResult.js');
let TtsActionGoal = require('./TtsActionGoal.js');
let AudioPlayAction = require('./AudioPlayAction.js');
let SoundActionFeedback = require('./SoundActionFeedback.js');
let ASRFileActionFeedback = require('./ASRFileActionFeedback.js');
let SoundFeedback = require('./SoundFeedback.js');
let ASRFileAction = require('./ASRFileAction.js');
let AudioPlayActionResult = require('./AudioPlayActionResult.js');
let SoundActionGoal = require('./SoundActionGoal.js');
let AudioPlayGoal = require('./AudioPlayGoal.js');
let ASRFileFeedback = require('./ASRFileFeedback.js');
let ASRFileActionGoal = require('./ASRFileActionGoal.js');
let TtsFeedback = require('./TtsFeedback.js');
let AudioPlayResult = require('./AudioPlayResult.js');
let AudioPlayActionFeedback = require('./AudioPlayActionFeedback.js');
let TtsActionResult = require('./TtsActionResult.js');
let ASRFileGoal = require('./ASRFileGoal.js');
let TtsActionFeedback = require('./TtsActionFeedback.js');
let SoundActionResult = require('./SoundActionResult.js');
let AudioPlayFeedback = require('./AudioPlayFeedback.js');
let SoundAction = require('./SoundAction.js');
let SoundGoal = require('./SoundGoal.js');
let TtsAction = require('./TtsAction.js');
let AudioPlayActionGoal = require('./AudioPlayActionGoal.js');
let TtsGoal = require('./TtsGoal.js');
let TtsResult = require('./TtsResult.js');
let ASRFileActionResult = require('./ASRFileActionResult.js');
let ASRFileResult = require('./ASRFileResult.js');

module.exports = {
  ASRActivation: ASRActivation,
  TTSstate: TTSstate,
  TtsMark: TtsMark,
  asrupdate: asrupdate,
  I18nText: I18nText,
  ASRLanguage: ASRLanguage,
  WebGuiEvent: WebGuiEvent,
  I18nArgument: I18nArgument,
  InputArgument: InputArgument,
  ASREvent: ASREvent,
  audiosignal: audiosignal,
  asrresult: asrresult,
  Input: Input,
  ASRSrvResponse: ASRSrvResponse,
  ASRStatus: ASRStatus,
  DirectionOfArrival: DirectionOfArrival,
  EnablingSoundLocalisation: EnablingSoundLocalisation,
  ASRLangModelMngmt: ASRLangModelMngmt,
  AudioDeviceDescription: AudioDeviceDescription,
  TtsText: TtsText,
  AudioPlayerState: AudioPlayerState,
  actiontag: actiontag,
  ASRSrvRequest: ASRSrvRequest,
  VoiceActivity: VoiceActivity,
  SoundResult: SoundResult,
  TtsActionGoal: TtsActionGoal,
  AudioPlayAction: AudioPlayAction,
  SoundActionFeedback: SoundActionFeedback,
  ASRFileActionFeedback: ASRFileActionFeedback,
  SoundFeedback: SoundFeedback,
  ASRFileAction: ASRFileAction,
  AudioPlayActionResult: AudioPlayActionResult,
  SoundActionGoal: SoundActionGoal,
  AudioPlayGoal: AudioPlayGoal,
  ASRFileFeedback: ASRFileFeedback,
  ASRFileActionGoal: ASRFileActionGoal,
  TtsFeedback: TtsFeedback,
  AudioPlayResult: AudioPlayResult,
  AudioPlayActionFeedback: AudioPlayActionFeedback,
  TtsActionResult: TtsActionResult,
  ASRFileGoal: ASRFileGoal,
  TtsActionFeedback: TtsActionFeedback,
  SoundActionResult: SoundActionResult,
  AudioPlayFeedback: AudioPlayFeedback,
  SoundAction: SoundAction,
  SoundGoal: SoundGoal,
  TtsAction: TtsAction,
  AudioPlayActionGoal: AudioPlayActionGoal,
  TtsGoal: TtsGoal,
  TtsResult: TtsResult,
  ASRFileActionResult: ASRFileActionResult,
  ASRFileResult: ASRFileResult,
};
