#pragma once

#include <Urho3D/Urho3DAll.h>


class App : public Application {
   URHO3D_OBJECT(App, Application)
  public:
   App(Context* ctx) : Application(ctx) {
   }
   virtual ~App() override {
   }

   void Setup() override;
   void LoadSettings();


   void Start() override;
   void Stop() override;

   void Update(StringHash event, VariantMap& map);

   ResourceCache*   cache_;
   Input*           input_;
   SharedPtr<Scene> scene_;

};
