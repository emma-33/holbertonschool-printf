<picture>
 <source media="(prefers-color-scheme: dark)" srcset="https://images.squarespace-cdn.com/content/v1/5a4bfe8bf09ca4228ceca3b7/1539139199598-ANH454IHZI1OKWONKRXY/logo.jpg?format=2500w">
 <source media="(prefers-color-scheme: light)" srcset="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQIrK23KvJPB7XdZrIk9mHwe3GZvtsUZLjkh-eG6KRgCLeWu3MW0kFcggq4COpLmeZviQ&usqp=CAU">
 <img alt="image holberton school" src="https://apply.holbertonschool.com/auth/sign_up?country=fr&locale=fr">
</picture>

# **Project Printf**

Write your own printf function, _printf.


## **Team and Tasks**

This project was released by Emma Lateyron and Marion Laroche in Holbertonschool's Bordeaux.
We work on the campus every day and we make a Check in every morning and a Check out every afternoon.
we divided some tasks, but the essential file '_printf' was written in collaboration.

This project consist of rebuilding the standard printf function in C.
Our project required a function capable of printing with the %d, %c, %s, and %i specifiers to standard output. _printf returns the number of characters printed (excluding the null byte at the end of strings). We were not asked to handle flag characters, field width, precision, or length.


## **Prototype**

int _printf(const char *format, ...);


## **Format specifiers**

| specifier |        description       |                  exemple                       |
|----------:|--------------------------|------------------------------------------------|
|    %c     | prints 1 character       | _printf("%c",'p');           --> "t"           |
|    %s     | prints a string          | _printf("%s", "let's code"); --> "let's code"  |
|    %i     | prints an integer        | _printf("%i", 33);           --> "33"          |
|    %d     | prints a decimal number  | _printf("%d", -33);          --> "-33"         |


## **Compilation**

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


## **Files**

|        file        |                   description                        |
|-------------------:|------------------------------------------------------|
| _printf.c          | Main function printf.                                |
| _putchar.c         | Function to write a charcater.                       |
| all_functions.c    | Functions handles % format.                          |
| main.c             | Test file who compare -printf and printf functions.  |
| main.h             | Header file, contain all prototypes and structure.   |
| print_number       | Function to print number.                            |
| get_function       | Choose the corresponding function.                   |


<picture>
 <source media="(prefers-color-scheme: dark)" srcset="https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1&title=printf.drawio#R5Vxbd5s4EP41Pn2qDyAk4DFx0mx3025O054mjwRkm1MMXhk39v76FQFspJHjSwQmrF%2BCRujCfJ9mRoPIAI1mqxvmz6df0pDGA8sIVwN0NbD4j5j8Ty5ZFxLHJoVgwqKwEJlbwX30Ly2FRildRiFdCDdmaRpn0VwUBmmS0CATZD5j6bN42ziNxVHn%2FoQCwX3gx1D6MwqzaSF1LWcr%2F4NGk2k1skm8ombmVzeXT7KY%2BmH6XBOh6wEasTTNiqvZakTjXHmVXop2n3bUbibGaJId0uCfm6vgKhg%2FsMe%2FrOfJ%2BM%2F7m0%2FkY9nLbz9elg98%2F%2F3i2%2Fdyxtm6UgPvimucFy6fp1FG7%2Bd%2BkNc8c9C5bJrNYl4y%2BeU4iuNRGqfspR2iJDTCvNkiY%2BkvWqvxPGK6mNdMmB9G%2FBlqdSF2kMenfQmfsZowZRld1UTlM9%2FQdEYztua3lLUIl%2Fp%2F3sJnVphMa9C5pcwvGTPZdLVVKr8o9XqEji2o44xFyYTLPifzZQaUzdJlEtK8S%2BNohYc%2BdceBSuEkcOnTWK1wh%2FqEGroUbhdN1pKy9wFAmgIAAQCixcAiMR%2F38onxq0l%2B9fXH7S2EYprOnpaL42HA1A1tFQyu9YQIUcPgOaHhOJpgcEQYLAUMbpvLwAYofKPZkiVcVpmh3qwBXBmdSvno3GsAA%2B1DG5%2BEF7nH5KUg9heLKBC1LELClcPWD%2FXCY14Y4qp4tapXXq3L0k7tZj6b0Gw%2FgWgoeGyIQU3HWKHiSsZo7GfRb9HPq%2FRejnCXRnzGG4htycxZ2BtisZNFumQBLdvVPbPUFbb3dlUoB3TF8fLXtdvm%2BQ2L3ZPGhrFjpC23ij63TNto9nTyObrJt5NEXSGHiQQ9y0b1UGbI%2FWxshmZeyON4xr5pVQStJmYKLd5MI8Qmxiqe2z%2B%2BJOHCGcXhrecogtX%2B02joSIp%2BA5Xkvqzm2ASmvZdR9tCSZtcGpWBsfuczvs%2Fh7mjKuTKZvlzl5Spm71WcgqQ45eDNko44RQkIjNWvkxAu83e7HXUkD4zsFrenSo3DuFy1O%2FowwCPjA6R%2Fb%2FZHtgIIl7SIA4zQ1ThYuF8wOAIM2MYQhjaXAwEwjKY0%2BMVFCV1lEJBg6jM%2FyCjrnWsQ1wdxzu0a4C5ik0BYlM4ZgMMh6Ft%2BTc4t2Gf32a7Schn%2BIM%2B3s5mvWDWLOQ2icaRaNe%2FXlIm4EKJwKG1aMg%2FAcseKoJuH%2BcsZ1bwyxuOxFQRqNY%2FHofcCAQAnJE8EEz0AmCIArnnuhVFNQAFBX92G2TXjZMKsweckYLTgv6HfQ2zWwW6uv7ZCdGDgdg4EuMkAOu9Q%2Bvm18KMrqSEiYeycnn6W1yzsakdiSFtiDwbd2ugxxBaqU%2BSjMTQMZw9LXkp3lEX8ySh7M3VIt6hjkqErhirWidRRdEXapY4FXewbqbMT5g7BJ2VXbdM4FT9HTrtu8iDak8Jw2vKJlQOaoH1Ndj5Qs3lkq0kLhgQLZrRrvKyOsR9JFgcZJ5NfzHCgxpgPpmy1QUmYStdIyWMIeTr3cMe4J3s7LL9BO8Lwih3h5qyuPGW9L%2FzV3GswoGsr3je75fZNpIjS3dPYZ8opREVfTcdt2s%2BE7LJOZnMMMTrFELIFUU5BHksQ2BV2mzmRpJi0jY%2BcG0FtmDSY5X537tTrGl8J9rY%2FEVRHjsYO5a4j2jZXDg8bNmxI%2Bykluoqyh9p1zfHx0pYkeWEvRwotvpuQC0loYu9EVpjSuQssb5k12TMwjtuCbUL6d58l58wjOKfdntW5%2BtqJ4L12D3WK0%2FIRIJB2P9jSSTlg1BCn5XGqCTfLaf3bV42cbi6o7BZXiWR%2F7VOPn8ocwjLpG%2BJqNeFmuar%2F9VarPr9b7ydMiXPE44EiOdHtm%2Fv70uX58c6hds7O3tekIb72ID1jdYqzspmU03kH89WSOjpw93K0mZQih1asZHMpn%2FylrmmL1DNttId8yhcl7Vpe712yXT7phk5ku%2Fz1ge6YoEoBiG8AQT1qJZ6F%2BaPH63uwALL8kLFAefEYUZImVDpzVIr8OJok%2BbrhJMzZfJkfGIoCP74oK2ZRGObDKM8zHfgO%2FPBDSLZkYlSfwBIFRWUu6fuyBJ6H%2FPp3f%2FWPPPENE1KchmxV%2F1Ws8%2F9ZANIHJopTeO0CADOTfV4ANsj4wS9L2tU%2FzNL1egFIO3Hn7PyHGaU%2B818%2Bio3xufkPsyR91r8UJGP33PSHHxj22vzIx7tIcwEoL27%2Fj1exYdj%2BNzR0%2FR8%3D">
 <source media="(prefers-color-scheme: light)" srcset="https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1&title=printf.drawio#R5Vxbd5s4EP41Pn2qDyAk4DFx0mx3025O054mjwRkm1MMXhk39v76FQFspJHjSwQmrF%2BCRujCfJ9mRoPIAI1mqxvmz6df0pDGA8sIVwN0NbD4j5j8Ty5ZFxLHJoVgwqKwEJlbwX30Ly2FRildRiFdCDdmaRpn0VwUBmmS0CATZD5j6bN42ziNxVHn%2FoQCwX3gx1D6MwqzaSF1LWcr%2F4NGk2k1skm8ombmVzeXT7KY%2BmH6XBOh6wEasTTNiqvZakTjXHmVXop2n3bUbibGaJId0uCfm6vgKhg%2FsMe%2FrOfJ%2BM%2F7m0%2FkY9nLbz9elg98%2F%2F3i2%2Fdyxtm6UgPvimucFy6fp1FG7%2Bd%2BkNc8c9C5bJrNYl4y%2BeU4iuNRGqfspR2iJDTCvNkiY%2BkvWqvxPGK6mNdMmB9G%2FBlqdSF2kMenfQmfsZowZRld1UTlM9%2FQdEYztua3lLUIl%2Fp%2F3sJnVphMa9C5pcwvGTPZdLVVKr8o9XqEji2o44xFyYTLPifzZQaUzdJlEtK8S%2BNohYc%2BdceBSuEkcOnTWK1wh%2FqEGroUbhdN1pKy9wFAmgIAAQCixcAiMR%2F38onxq0l%2B9fXH7S2EYprOnpaL42HA1A1tFQyu9YQIUcPgOaHhOJpgcEQYLAUMbpvLwAYofKPZkiVcVpmh3qwBXBmdSvno3GsAA%2B1DG5%2BEF7nH5KUg9heLKBC1LELClcPWD%2FXCY14Y4qp4tapXXq3L0k7tZj6b0Gw%2FgWgoeGyIQU3HWKHiSsZo7GfRb9HPq%2FRejnCXRnzGG4htycxZ2BtisZNFumQBLdvVPbPUFbb3dlUoB3TF8fLXtdvm%2BQ2L3ZPGhrFjpC23ij63TNto9nTyObrJt5NEXSGHiQQ9y0b1UGbI%2FWxshmZeyON4xr5pVQStJmYKLd5MI8Qmxiqe2z%2B%2BJOHCGcXhrecogtX%2B02joSIp%2BA5Xkvqzm2ASmvZdR9tCSZtcGpWBsfuczvs%2Fh7mjKuTKZvlzl5Spm71WcgqQ45eDNko44RQkIjNWvkxAu83e7HXUkD4zsFrenSo3DuFy1O%2FowwCPjA6R%2Fb%2FZHtgIIl7SIA4zQ1ThYuF8wOAIM2MYQhjaXAwEwjKY0%2BMVFCV1lEJBg6jM%2FyCjrnWsQ1wdxzu0a4C5ik0BYlM4ZgMMh6Ft%2BTc4t2Gf32a7Schn%2BIM%2B3s5mvWDWLOQ2icaRaNe%2FXlIm4EKJwKG1aMg%2FAcseKoJuH%2BcsZ1bwyxuOxFQRqNY%2FHofcCAQAnJE8EEz0AmCIArnnuhVFNQAFBX92G2TXjZMKsweckYLTgv6HfQ2zWwW6uv7ZCdGDgdg4EuMkAOu9Q%2Bvm18KMrqSEiYeycnn6W1yzsakdiSFtiDwbd2ugxxBaqU%2BSjMTQMZw9LXkp3lEX8ySh7M3VIt6hjkqErhirWidRRdEXapY4FXewbqbMT5g7BJ2VXbdM4FT9HTrtu8iDak8Jw2vKJlQOaoH1Ndj5Qs3lkq0kLhgQLZrRrvKyOsR9JFgcZJ5NfzHCgxpgPpmy1QUmYStdIyWMIeTr3cMe4J3s7LL9BO8Lwih3h5qyuPGW9L%2FzV3GswoGsr3je75fZNpIjS3dPYZ8opREVfTcdt2s%2BE7LJOZnMMMTrFELIFUU5BHksQ2BV2mzmRpJi0jY%2BcG0FtmDSY5X537tTrGl8J9rY%2FEVRHjsYO5a4j2jZXDg8bNmxI%2Bykluoqyh9p1zfHx0pYkeWEvRwotvpuQC0loYu9EVpjSuQssb5k12TMwjtuCbUL6d58l58wjOKfdntW5%2BtqJ4L12D3WK0%2FIRIJB2P9jSSTlg1BCn5XGqCTfLaf3bV42cbi6o7BZXiWR%2F7VOPn8ocwjLpG%2BJqNeFmuar%2F9VarPr9b7ydMiXPE44EiOdHtm%2Fv70uX58c6hds7O3tekIb72ID1jdYqzspmU03kH89WSOjpw93K0mZQih1asZHMpn%2FylrmmL1DNttId8yhcl7Vpe712yXT7phk5ku%2Fz1ge6YoEoBiG8AQT1qJZ6F%2BaPH63uwALL8kLFAefEYUZImVDpzVIr8OJok%2BbrhJMzZfJkfGIoCP74oK2ZRGObDKM8zHfgO%2FPBDSLZkYlSfwBIFRWUu6fuyBJ6H%2FPp3f%2FWPPPENE1KchmxV%2F1Ws8%2F9ZANIHJopTeO0CADOTfV4ANsj4wS9L2tU%2FzNL1egFIO3Hn7PyHGaU%2B818%2Bio3xufkPsyR91r8UJGP33PSHHxj22vzIx7tIcwEoL27%2Fj1exYdj%2BNzR0%2FR8%3D">
 <img alt="FLOWCHARTS" src="https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1&title=printf.drawio#R5Vxbd5s4EP41Pn2qDyAk4DFx0mx3025O054mjwRkm1MMXhk39v76FQFspJHjSwQmrF%2BCRujCfJ9mRoPIAI1mqxvmz6df0pDGA8sIVwN0NbD4j5j8Ty5ZFxLHJoVgwqKwEJlbwX30Ly2FRildRiFdCDdmaRpn0VwUBmmS0CATZD5j6bN42ziNxVHn%2FoQCwX3gx1D6MwqzaSF1LWcr%2F4NGk2k1skm8ombmVzeXT7KY%2BmH6XBOh6wEasTTNiqvZakTjXHmVXop2n3bUbibGaJId0uCfm6vgKhg%2FsMe%2FrOfJ%2BM%2F7m0%2FkY9nLbz9elg98%2F%2F3i2%2Fdyxtm6UgPvimucFy6fp1FG7%2Bd%2BkNc8c9C5bJrNYl4y%2BeU4iuNRGqfspR2iJDTCvNkiY%2BkvWqvxPGK6mNdMmB9G%2FBlqdSF2kMenfQmfsZowZRld1UTlM9%2FQdEYztua3lLUIl%2Fp%2F3sJnVphMa9C5pcwvGTPZdLVVKr8o9XqEji2o44xFyYTLPifzZQaUzdJlEtK8S%2BNohYc%2BdceBSuEkcOnTWK1wh%2FqEGroUbhdN1pKy9wFAmgIAAQCixcAiMR%2F38onxq0l%2B9fXH7S2EYprOnpaL42HA1A1tFQyu9YQIUcPgOaHhOJpgcEQYLAUMbpvLwAYofKPZkiVcVpmh3qwBXBmdSvno3GsAA%2B1DG5%2BEF7nH5KUg9heLKBC1LELClcPWD%2FXCY14Y4qp4tapXXq3L0k7tZj6b0Gw%2FgWgoeGyIQU3HWKHiSsZo7GfRb9HPq%2FRejnCXRnzGG4htycxZ2BtisZNFumQBLdvVPbPUFbb3dlUoB3TF8fLXtdvm%2BQ2L3ZPGhrFjpC23ij63TNto9nTyObrJt5NEXSGHiQQ9y0b1UGbI%2FWxshmZeyON4xr5pVQStJmYKLd5MI8Qmxiqe2z%2B%2BJOHCGcXhrecogtX%2B02joSIp%2BA5Xkvqzm2ASmvZdR9tCSZtcGpWBsfuczvs%2Fh7mjKuTKZvlzl5Spm71WcgqQ45eDNko44RQkIjNWvkxAu83e7HXUkD4zsFrenSo3DuFy1O%2FowwCPjA6R%2Fb%2FZHtgIIl7SIA4zQ1ThYuF8wOAIM2MYQhjaXAwEwjKY0%2BMVFCV1lEJBg6jM%2FyCjrnWsQ1wdxzu0a4C5ik0BYlM4ZgMMh6Ft%2BTc4t2Gf32a7Schn%2BIM%2B3s5mvWDWLOQ2icaRaNe%2FXlIm4EKJwKG1aMg%2FAcseKoJuH%2BcsZ1bwyxuOxFQRqNY%2FHofcCAQAnJE8EEz0AmCIArnnuhVFNQAFBX92G2TXjZMKsweckYLTgv6HfQ2zWwW6uv7ZCdGDgdg4EuMkAOu9Q%2Bvm18KMrqSEiYeycnn6W1yzsakdiSFtiDwbd2ugxxBaqU%2BSjMTQMZw9LXkp3lEX8ySh7M3VIt6hjkqErhirWidRRdEXapY4FXewbqbMT5g7BJ2VXbdM4FT9HTrtu8iDak8Jw2vKJlQOaoH1Ndj5Qs3lkq0kLhgQLZrRrvKyOsR9JFgcZJ5NfzHCgxpgPpmy1QUmYStdIyWMIeTr3cMe4J3s7LL9BO8Lwih3h5qyuPGW9L%2FzV3GswoGsr3je75fZNpIjS3dPYZ8opREVfTcdt2s%2BE7LJOZnMMMTrFELIFUU5BHksQ2BV2mzmRpJi0jY%2BcG0FtmDSY5X537tTrGl8J9rY%2FEVRHjsYO5a4j2jZXDg8bNmxI%2Bykluoqyh9p1zfHx0pYkeWEvRwotvpuQC0loYu9EVpjSuQssb5k12TMwjtuCbUL6d58l58wjOKfdntW5%2BtqJ4L12D3WK0%2FIRIJB2P9jSSTlg1BCn5XGqCTfLaf3bV42cbi6o7BZXiWR%2F7VOPn8ocwjLpG%2BJqNeFmuar%2F9VarPr9b7ydMiXPE44EiOdHtm%2Fv70uX58c6hds7O3tekIb72ID1jdYqzspmU03kH89WSOjpw93K0mZQih1asZHMpn%2FylrmmL1DNttId8yhcl7Vpe712yXT7phk5ku%2Fz1ge6YoEoBiG8AQT1qJZ6F%2BaPH63uwALL8kLFAefEYUZImVDpzVIr8OJok%2BbrhJMzZfJkfGIoCP74oK2ZRGObDKM8zHfgO%2FPBDSLZkYlSfwBIFRWUu6fuyBJ6H%2FPp3f%2FWPPPENE1KchmxV%2F1Ws8%2F9ZANIHJopTeO0CADOTfV4ANsj4wS9L2tU%2FzNL1egFIO3Hn7PyHGaU%2B818%2Bio3xufkPsyR91r8UJGP33PSHHxj22vzIx7tIcwEoL27%2Fj1exYdj%2BNzR0%2FR8%3D">
</picture>
   

## **Authors**

Lateyron Emma [Github](https://github.com/emma-33).

Laroche Marion [Github](https://github.com/Mamuche).