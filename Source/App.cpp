#include "App.hpp"

void App::Setup() {
   LoadSettings();
}

void App::LoadSettings() {
   JSONFile settingsFile(context_);
   settingsFile.LoadFile("Settings.json");
   auto settingsRoot = settingsFile.GetRoot()["EngineParameters"];
   for (auto iter = settingsRoot.Begin(); iter != settingsRoot.End(); iter.GotoNext()) {
      URHO3D_LOGINFO("Setting " + iter->first_);
      auto& key = iter->first_;
      if (iter->second_.IsBool())
         engineParameters_[key] = iter->second_.GetBool();
      else if (iter->second_.IsNumber())
         engineParameters_[key] = iter->second_.GetFloat();
   }
}

void App::Start() {
   cache_ = GetSubsystem<ResourceCache>();
   input_ = GetSubsystem<Input>();


   SubscribeToEvent(E_UPDATE, URHO3D_HANDLER(App, App::Update));
}

void App::Stop() {
}

void App::Update(StringHash event, VariantMap& map) {

}

URHO3D_DEFINE_APPLICATION_MAIN(App);
