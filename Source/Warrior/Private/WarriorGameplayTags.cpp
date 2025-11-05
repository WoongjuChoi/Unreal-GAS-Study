// Vince Petrelli All Rights Reserved


#include "WarriorGameplayTags.h"

namespace WarriorGameplayTags
{
	/** Input Tags **/
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move"); // 첫 번째 인자는 C++ 코드 내에서 이 태그를 참조할 때 사용할 변수 이름
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look"); // 두 번째 인자는 실제로 에셋, 블루프린트, 설정 파일 등에서 사용될 고유한 문자열 태그
}
