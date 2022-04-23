Pod::Spec.new do |spec|
  spec.name         = "SuprSendShared"
  spec.version      = "1.0.0"
  spec.summary      = "shared iOS Sdk"
  spec.description  = "This is a shared SDK for iOS"
  spec.homepage     = "https://github.com/surajshindalkar/SharedFrameworkRepository"
  spec.author       = { "Suraj Shindalkar" => "surajshindalkar530@gmail.com" }
  spec.platform     = :ios
  spec.ios.deployment_target = "13.0"
  spec.source       = { :git => "https://github.com/surajshindalkar/SharedFrameworkRepository.git", :tag =>  "1.0.0" }
  spec.vendored_frameworks = "SuprSendShared.xcframework"

end