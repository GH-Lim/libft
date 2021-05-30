# libft

## Common Instructions

- 귀하의 프로젝트는 Norm에 따라 작성되어야합니다. 보너스 파일 / 기능이있는 경우 norm 검사에 포함되며 내부에 norm 오류가 있으면 0을 받게됩니다.
- 정의되지 않은 동작을 제외하고 기능이 예기치 않게 종료되어서는 안됩니다 (세그멘테이션 오류, 버스 오류, 이중 해제 등). 이 경우 프로젝트는 작동하지 않는 것으로 간주되며 평가 중에 0을 받게됩니다.
- 모든 힙 할당 메모리 공간은 필요한 경우 적절하게 해제되어야합니다. 누출은 용납되지 않습니다.
- 주제에 필요한 경우 -Wall, -Wextra 및 -Werror 플래그를 사용하여 소스 파일을 필요한 출력으로 컴파일하는 Makefile을 제출해야하며 Makefile은 다시 링크하지 않아야합니다.
- Makefile은 최소한 $ (NAME), all, clean, fclean 및 re 규칙을 포함해야합니다.
- 프로젝트에 보너스를 적용하려면 Makefile에 bonus 규칙을 포함해야합니다. 그러면 프로젝트의 주요 부분에서 금지 된 모든 다양한 헤더, 라이브러리 또는 기능이 추가됩니다. 보너스는 다른 파일 _bonus. {c / h}에 있어야합니다.
  필수 및 보너스 부품 평가는 별도로 수행됩니다.
- 프로젝트에서 libft를 사용할 수있는 경우 소스 및 관련 Makefile을 관련 Makefile과 함께 libft 폴더에 복사해야합니다. 프로젝트의 Makefile은 Makefile을 사용하여 라이브러리를 컴파일 한 다음 프로젝트를 컴파일해야합니다
- 이 작업을 제출할 필요가없고 채점되지 않더라도 프로젝트에 대한 테스트 프로그램을 만드는 것이 좋습니다. 자신의 작업과 동료의 작업을 쉽게 테스트 할 수있는 기회를 제공합니다. 이러한 테스트는 defence 중에 특히 유용합니다. 실제로 defence 중에는 테스트 및 / 또는 평가중인 동료의 테스트를 자유롭게 사용할 수 있습니다.
- 할당 된 git 저장소에 작업을 제출합니다. git 저장소의 작업 만 등급이 지정됩니다. Deepthought가 작업 등급을 지정하는 경우 동료 평가 후에 수행됩니다. Deepthought의 채점 중 작업 섹션에서 오류가 발생하면 평가가 중지됩니다.

## Mandatory Part

### 기술적 고려 사항

- 전역 변수를 사용하는 것은 금지되어 있습니다.
- 복잡한 함수를 작성하기 위해 하위 함수가 필요한 경우 라이브러리에 게시하지 않도록 이러한 하위 함수를 **static**으로 정의해야합니다. 향후 프로젝트에서도 이 작업을 수행하는 것이 좋습니다.
- 저장소의 루트에있는 모든 파일을 제출합니다.
- 사용하지 않는 파일을 제출하는 것은 금지되어 있습니다.
- 모든 .c는 플래그로 컴파일해야합니다.
- librairy를 만들려면 ar 명령을 사용해야합니다. libtool 명령을 사용하는 것은 금지되어 있습니다.

### Part 1 - Libc 함수

이 첫 번째 부분에서는 man에 정의 된대로 libc 함수 세트를 다시 코딩해야합니다. 함수는 원본과 동일한 프로토 타입 및 동작을 표시해야합니다. 함수 이름은 "ft_"로 시작해야합니다. 예를 들어 strlen은 ft_strlen이됩니다.

> 다시 코딩해야하는 일부 함수의 프로토 타입은 "restrict"한정자를 사용합니다. 이 키워드는 c99 표준의 일부입니다.
> 따라서 프로토 타입에 포함하고 플래그 -std = c99로 컴파일하는 것은 금지되어 있습니다.

다음 함수를 다시 코딩해야합니다. 이 기능은 외부 함수가 필요하지 않습니다.

- memset
- bzero
- memcpy
- memccpy
- memmove
- memchr
- memcmp
- strlen
- strlcpy
- strlcat
- strchr
- strrchr
- strnstr
- strncmp
- atoi
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower

또한 "malloc" 함수를 사용하여 다음 함수를 다시 코딩해야합니다.

- calloc
- strdup

### Part 2 - 추가 기능

이 두 번째 부분에서는 libc에 포함되지 않거나 다른 형식으로 포함 된 함수 집합을 코딩해야합니다. 이러한 함수 중 일부는 파트 1의 함수를 작성하는 데 유용 할 수 있습니다.

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

## Bonus Part

필수 부분을 성공적으로 완료했다면 더 많은 것을 즐길 수 있습니다. 이 마지막 섹션을 보너스 포인트로 볼 수 있습니다.

메모리와 문자열을 조작하는 함수는 매우 유용하지만 곧 list를 조작하는 함수가 훨씬 더 유용하다는 것을 알게 될 것입니다.

다음 구조를 사용하여 목록의 요소를 나타냅니다. 이 구조는 libft.h 파일에 추가되어야합니다.

make bonus는 libft.a 라이브러리에 보너스 함수를 추가합니다.

이 파트에서는 .c 파일과 헤더에 _bonus를 추가 할 필요가 없습니다. 자신의 보너스 기능이 포함 된 파일에만 _bonus를 추가하십시오.

```c
typedef struct	s_list
{
  void					*content;
  struct s_list	*next;
}								t_list;
```

다음은 t_list 구조체의 필드에 대한 설명입니다.

- content : 요소에 포함 된 데이터. `void *`는 모든 종류의 데이터를 저장할 수 있습니다.
- next : 다음 요소의 주소 또는 마지막 요소 인 경우 `NULL`입니다.

다음 함수를 사용하면 list를 쉽게 사용할 수 있습니다.

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

적합한 기능을 libft에 자유롭게 추가할 수 있습니다.