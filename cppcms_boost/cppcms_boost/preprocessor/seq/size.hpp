# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef CPPCMS_BOOST_PREPROCESSOR_SEQ_SIZE_HPP
# define CPPCMS_BOOST_PREPROCESSOR_SEQ_SIZE_HPP
#
# include <cppcms_boost/preprocessor/cat.hpp>
# include <cppcms_boost/preprocessor/config/config.hpp>
# include <cppcms_boost/preprocessor/tuple/eat.hpp>
#
# if CPPCMS_BOOST_PP_CONFIG_FLAGS() & CPPCMS_BOOST_PP_CONFIG_MWCC()
#    define CPPCMS_BOOST_PP_SEQ_SIZE(seq) CPPCMS_BOOST_PP_SEQ_SIZE_I((seq))
#    define CPPCMS_BOOST_PP_SEQ_SIZE_I(par) CPPCMS_BOOST_PP_SEQ_SIZE_II ## par
#    define CPPCMS_BOOST_PP_SEQ_SIZE_II(seq) CPPCMS_BOOST_PP_CAT(CPPCMS_BOOST_PP_SEQ_SIZE_, CPPCMS_BOOST_PP_SEQ_SIZE_0 ## seq)
# elif CPPCMS_BOOST_PP_CONFIG_FLAGS() & CPPCMS_BOOST_PP_CONFIG_EDG() || CPPCMS_BOOST_PP_CONFIG_FLAGS() & CPPCMS_BOOST_PP_CONFIG_MSVC()
#    define CPPCMS_BOOST_PP_SEQ_SIZE(seq) CPPCMS_BOOST_PP_SEQ_SIZE_I(seq)
#    define CPPCMS_BOOST_PP_SEQ_SIZE_I(seq) CPPCMS_BOOST_PP_CAT(CPPCMS_BOOST_PP_SEQ_SIZE_, CPPCMS_BOOST_PP_SEQ_SIZE_0 seq)
# elif defined(__IBMC__) || defined(__IBMCPP__)
#    define CPPCMS_BOOST_PP_SEQ_SIZE(seq) CPPCMS_BOOST_PP_CAT(CPPCMS_BOOST_PP_SEQ_SIZE_, CPPCMS_BOOST_PP_CAT(CPPCMS_BOOST_PP_SEQ_SIZE_0, seq))
# else
#    define CPPCMS_BOOST_PP_SEQ_SIZE(seq) CPPCMS_BOOST_PP_CAT(CPPCMS_BOOST_PP_SEQ_SIZE_, CPPCMS_BOOST_PP_SEQ_SIZE_0 seq)
# endif
#
# define CPPCMS_BOOST_PP_SEQ_SIZE_0(_) CPPCMS_BOOST_PP_SEQ_SIZE_1
# define CPPCMS_BOOST_PP_SEQ_SIZE_1(_) CPPCMS_BOOST_PP_SEQ_SIZE_2
# define CPPCMS_BOOST_PP_SEQ_SIZE_2(_) CPPCMS_BOOST_PP_SEQ_SIZE_3
# define CPPCMS_BOOST_PP_SEQ_SIZE_3(_) CPPCMS_BOOST_PP_SEQ_SIZE_4
# define CPPCMS_BOOST_PP_SEQ_SIZE_4(_) CPPCMS_BOOST_PP_SEQ_SIZE_5
# define CPPCMS_BOOST_PP_SEQ_SIZE_5(_) CPPCMS_BOOST_PP_SEQ_SIZE_6
# define CPPCMS_BOOST_PP_SEQ_SIZE_6(_) CPPCMS_BOOST_PP_SEQ_SIZE_7
# define CPPCMS_BOOST_PP_SEQ_SIZE_7(_) CPPCMS_BOOST_PP_SEQ_SIZE_8
# define CPPCMS_BOOST_PP_SEQ_SIZE_8(_) CPPCMS_BOOST_PP_SEQ_SIZE_9
# define CPPCMS_BOOST_PP_SEQ_SIZE_9(_) CPPCMS_BOOST_PP_SEQ_SIZE_10
# define CPPCMS_BOOST_PP_SEQ_SIZE_10(_) CPPCMS_BOOST_PP_SEQ_SIZE_11
# define CPPCMS_BOOST_PP_SEQ_SIZE_11(_) CPPCMS_BOOST_PP_SEQ_SIZE_12
# define CPPCMS_BOOST_PP_SEQ_SIZE_12(_) CPPCMS_BOOST_PP_SEQ_SIZE_13
# define CPPCMS_BOOST_PP_SEQ_SIZE_13(_) CPPCMS_BOOST_PP_SEQ_SIZE_14
# define CPPCMS_BOOST_PP_SEQ_SIZE_14(_) CPPCMS_BOOST_PP_SEQ_SIZE_15
# define CPPCMS_BOOST_PP_SEQ_SIZE_15(_) CPPCMS_BOOST_PP_SEQ_SIZE_16
# define CPPCMS_BOOST_PP_SEQ_SIZE_16(_) CPPCMS_BOOST_PP_SEQ_SIZE_17
# define CPPCMS_BOOST_PP_SEQ_SIZE_17(_) CPPCMS_BOOST_PP_SEQ_SIZE_18
# define CPPCMS_BOOST_PP_SEQ_SIZE_18(_) CPPCMS_BOOST_PP_SEQ_SIZE_19
# define CPPCMS_BOOST_PP_SEQ_SIZE_19(_) CPPCMS_BOOST_PP_SEQ_SIZE_20
# define CPPCMS_BOOST_PP_SEQ_SIZE_20(_) CPPCMS_BOOST_PP_SEQ_SIZE_21
# define CPPCMS_BOOST_PP_SEQ_SIZE_21(_) CPPCMS_BOOST_PP_SEQ_SIZE_22
# define CPPCMS_BOOST_PP_SEQ_SIZE_22(_) CPPCMS_BOOST_PP_SEQ_SIZE_23
# define CPPCMS_BOOST_PP_SEQ_SIZE_23(_) CPPCMS_BOOST_PP_SEQ_SIZE_24
# define CPPCMS_BOOST_PP_SEQ_SIZE_24(_) CPPCMS_BOOST_PP_SEQ_SIZE_25
# define CPPCMS_BOOST_PP_SEQ_SIZE_25(_) CPPCMS_BOOST_PP_SEQ_SIZE_26
# define CPPCMS_BOOST_PP_SEQ_SIZE_26(_) CPPCMS_BOOST_PP_SEQ_SIZE_27
# define CPPCMS_BOOST_PP_SEQ_SIZE_27(_) CPPCMS_BOOST_PP_SEQ_SIZE_28
# define CPPCMS_BOOST_PP_SEQ_SIZE_28(_) CPPCMS_BOOST_PP_SEQ_SIZE_29
# define CPPCMS_BOOST_PP_SEQ_SIZE_29(_) CPPCMS_BOOST_PP_SEQ_SIZE_30
# define CPPCMS_BOOST_PP_SEQ_SIZE_30(_) CPPCMS_BOOST_PP_SEQ_SIZE_31
# define CPPCMS_BOOST_PP_SEQ_SIZE_31(_) CPPCMS_BOOST_PP_SEQ_SIZE_32
# define CPPCMS_BOOST_PP_SEQ_SIZE_32(_) CPPCMS_BOOST_PP_SEQ_SIZE_33
# define CPPCMS_BOOST_PP_SEQ_SIZE_33(_) CPPCMS_BOOST_PP_SEQ_SIZE_34
# define CPPCMS_BOOST_PP_SEQ_SIZE_34(_) CPPCMS_BOOST_PP_SEQ_SIZE_35
# define CPPCMS_BOOST_PP_SEQ_SIZE_35(_) CPPCMS_BOOST_PP_SEQ_SIZE_36
# define CPPCMS_BOOST_PP_SEQ_SIZE_36(_) CPPCMS_BOOST_PP_SEQ_SIZE_37
# define CPPCMS_BOOST_PP_SEQ_SIZE_37(_) CPPCMS_BOOST_PP_SEQ_SIZE_38
# define CPPCMS_BOOST_PP_SEQ_SIZE_38(_) CPPCMS_BOOST_PP_SEQ_SIZE_39
# define CPPCMS_BOOST_PP_SEQ_SIZE_39(_) CPPCMS_BOOST_PP_SEQ_SIZE_40
# define CPPCMS_BOOST_PP_SEQ_SIZE_40(_) CPPCMS_BOOST_PP_SEQ_SIZE_41
# define CPPCMS_BOOST_PP_SEQ_SIZE_41(_) CPPCMS_BOOST_PP_SEQ_SIZE_42
# define CPPCMS_BOOST_PP_SEQ_SIZE_42(_) CPPCMS_BOOST_PP_SEQ_SIZE_43
# define CPPCMS_BOOST_PP_SEQ_SIZE_43(_) CPPCMS_BOOST_PP_SEQ_SIZE_44
# define CPPCMS_BOOST_PP_SEQ_SIZE_44(_) CPPCMS_BOOST_PP_SEQ_SIZE_45
# define CPPCMS_BOOST_PP_SEQ_SIZE_45(_) CPPCMS_BOOST_PP_SEQ_SIZE_46
# define CPPCMS_BOOST_PP_SEQ_SIZE_46(_) CPPCMS_BOOST_PP_SEQ_SIZE_47
# define CPPCMS_BOOST_PP_SEQ_SIZE_47(_) CPPCMS_BOOST_PP_SEQ_SIZE_48
# define CPPCMS_BOOST_PP_SEQ_SIZE_48(_) CPPCMS_BOOST_PP_SEQ_SIZE_49
# define CPPCMS_BOOST_PP_SEQ_SIZE_49(_) CPPCMS_BOOST_PP_SEQ_SIZE_50
# define CPPCMS_BOOST_PP_SEQ_SIZE_50(_) CPPCMS_BOOST_PP_SEQ_SIZE_51
# define CPPCMS_BOOST_PP_SEQ_SIZE_51(_) CPPCMS_BOOST_PP_SEQ_SIZE_52
# define CPPCMS_BOOST_PP_SEQ_SIZE_52(_) CPPCMS_BOOST_PP_SEQ_SIZE_53
# define CPPCMS_BOOST_PP_SEQ_SIZE_53(_) CPPCMS_BOOST_PP_SEQ_SIZE_54
# define CPPCMS_BOOST_PP_SEQ_SIZE_54(_) CPPCMS_BOOST_PP_SEQ_SIZE_55
# define CPPCMS_BOOST_PP_SEQ_SIZE_55(_) CPPCMS_BOOST_PP_SEQ_SIZE_56
# define CPPCMS_BOOST_PP_SEQ_SIZE_56(_) CPPCMS_BOOST_PP_SEQ_SIZE_57
# define CPPCMS_BOOST_PP_SEQ_SIZE_57(_) CPPCMS_BOOST_PP_SEQ_SIZE_58
# define CPPCMS_BOOST_PP_SEQ_SIZE_58(_) CPPCMS_BOOST_PP_SEQ_SIZE_59
# define CPPCMS_BOOST_PP_SEQ_SIZE_59(_) CPPCMS_BOOST_PP_SEQ_SIZE_60
# define CPPCMS_BOOST_PP_SEQ_SIZE_60(_) CPPCMS_BOOST_PP_SEQ_SIZE_61
# define CPPCMS_BOOST_PP_SEQ_SIZE_61(_) CPPCMS_BOOST_PP_SEQ_SIZE_62
# define CPPCMS_BOOST_PP_SEQ_SIZE_62(_) CPPCMS_BOOST_PP_SEQ_SIZE_63
# define CPPCMS_BOOST_PP_SEQ_SIZE_63(_) CPPCMS_BOOST_PP_SEQ_SIZE_64
# define CPPCMS_BOOST_PP_SEQ_SIZE_64(_) CPPCMS_BOOST_PP_SEQ_SIZE_65
# define CPPCMS_BOOST_PP_SEQ_SIZE_65(_) CPPCMS_BOOST_PP_SEQ_SIZE_66
# define CPPCMS_BOOST_PP_SEQ_SIZE_66(_) CPPCMS_BOOST_PP_SEQ_SIZE_67
# define CPPCMS_BOOST_PP_SEQ_SIZE_67(_) CPPCMS_BOOST_PP_SEQ_SIZE_68
# define CPPCMS_BOOST_PP_SEQ_SIZE_68(_) CPPCMS_BOOST_PP_SEQ_SIZE_69
# define CPPCMS_BOOST_PP_SEQ_SIZE_69(_) CPPCMS_BOOST_PP_SEQ_SIZE_70
# define CPPCMS_BOOST_PP_SEQ_SIZE_70(_) CPPCMS_BOOST_PP_SEQ_SIZE_71
# define CPPCMS_BOOST_PP_SEQ_SIZE_71(_) CPPCMS_BOOST_PP_SEQ_SIZE_72
# define CPPCMS_BOOST_PP_SEQ_SIZE_72(_) CPPCMS_BOOST_PP_SEQ_SIZE_73
# define CPPCMS_BOOST_PP_SEQ_SIZE_73(_) CPPCMS_BOOST_PP_SEQ_SIZE_74
# define CPPCMS_BOOST_PP_SEQ_SIZE_74(_) CPPCMS_BOOST_PP_SEQ_SIZE_75
# define CPPCMS_BOOST_PP_SEQ_SIZE_75(_) CPPCMS_BOOST_PP_SEQ_SIZE_76
# define CPPCMS_BOOST_PP_SEQ_SIZE_76(_) CPPCMS_BOOST_PP_SEQ_SIZE_77
# define CPPCMS_BOOST_PP_SEQ_SIZE_77(_) CPPCMS_BOOST_PP_SEQ_SIZE_78
# define CPPCMS_BOOST_PP_SEQ_SIZE_78(_) CPPCMS_BOOST_PP_SEQ_SIZE_79
# define CPPCMS_BOOST_PP_SEQ_SIZE_79(_) CPPCMS_BOOST_PP_SEQ_SIZE_80
# define CPPCMS_BOOST_PP_SEQ_SIZE_80(_) CPPCMS_BOOST_PP_SEQ_SIZE_81
# define CPPCMS_BOOST_PP_SEQ_SIZE_81(_) CPPCMS_BOOST_PP_SEQ_SIZE_82
# define CPPCMS_BOOST_PP_SEQ_SIZE_82(_) CPPCMS_BOOST_PP_SEQ_SIZE_83
# define CPPCMS_BOOST_PP_SEQ_SIZE_83(_) CPPCMS_BOOST_PP_SEQ_SIZE_84
# define CPPCMS_BOOST_PP_SEQ_SIZE_84(_) CPPCMS_BOOST_PP_SEQ_SIZE_85
# define CPPCMS_BOOST_PP_SEQ_SIZE_85(_) CPPCMS_BOOST_PP_SEQ_SIZE_86
# define CPPCMS_BOOST_PP_SEQ_SIZE_86(_) CPPCMS_BOOST_PP_SEQ_SIZE_87
# define CPPCMS_BOOST_PP_SEQ_SIZE_87(_) CPPCMS_BOOST_PP_SEQ_SIZE_88
# define CPPCMS_BOOST_PP_SEQ_SIZE_88(_) CPPCMS_BOOST_PP_SEQ_SIZE_89
# define CPPCMS_BOOST_PP_SEQ_SIZE_89(_) CPPCMS_BOOST_PP_SEQ_SIZE_90
# define CPPCMS_BOOST_PP_SEQ_SIZE_90(_) CPPCMS_BOOST_PP_SEQ_SIZE_91
# define CPPCMS_BOOST_PP_SEQ_SIZE_91(_) CPPCMS_BOOST_PP_SEQ_SIZE_92
# define CPPCMS_BOOST_PP_SEQ_SIZE_92(_) CPPCMS_BOOST_PP_SEQ_SIZE_93
# define CPPCMS_BOOST_PP_SEQ_SIZE_93(_) CPPCMS_BOOST_PP_SEQ_SIZE_94
# define CPPCMS_BOOST_PP_SEQ_SIZE_94(_) CPPCMS_BOOST_PP_SEQ_SIZE_95
# define CPPCMS_BOOST_PP_SEQ_SIZE_95(_) CPPCMS_BOOST_PP_SEQ_SIZE_96
# define CPPCMS_BOOST_PP_SEQ_SIZE_96(_) CPPCMS_BOOST_PP_SEQ_SIZE_97
# define CPPCMS_BOOST_PP_SEQ_SIZE_97(_) CPPCMS_BOOST_PP_SEQ_SIZE_98
# define CPPCMS_BOOST_PP_SEQ_SIZE_98(_) CPPCMS_BOOST_PP_SEQ_SIZE_99
# define CPPCMS_BOOST_PP_SEQ_SIZE_99(_) CPPCMS_BOOST_PP_SEQ_SIZE_100
# define CPPCMS_BOOST_PP_SEQ_SIZE_100(_) CPPCMS_BOOST_PP_SEQ_SIZE_101
# define CPPCMS_BOOST_PP_SEQ_SIZE_101(_) CPPCMS_BOOST_PP_SEQ_SIZE_102
# define CPPCMS_BOOST_PP_SEQ_SIZE_102(_) CPPCMS_BOOST_PP_SEQ_SIZE_103
# define CPPCMS_BOOST_PP_SEQ_SIZE_103(_) CPPCMS_BOOST_PP_SEQ_SIZE_104
# define CPPCMS_BOOST_PP_SEQ_SIZE_104(_) CPPCMS_BOOST_PP_SEQ_SIZE_105
# define CPPCMS_BOOST_PP_SEQ_SIZE_105(_) CPPCMS_BOOST_PP_SEQ_SIZE_106
# define CPPCMS_BOOST_PP_SEQ_SIZE_106(_) CPPCMS_BOOST_PP_SEQ_SIZE_107
# define CPPCMS_BOOST_PP_SEQ_SIZE_107(_) CPPCMS_BOOST_PP_SEQ_SIZE_108
# define CPPCMS_BOOST_PP_SEQ_SIZE_108(_) CPPCMS_BOOST_PP_SEQ_SIZE_109
# define CPPCMS_BOOST_PP_SEQ_SIZE_109(_) CPPCMS_BOOST_PP_SEQ_SIZE_110
# define CPPCMS_BOOST_PP_SEQ_SIZE_110(_) CPPCMS_BOOST_PP_SEQ_SIZE_111
# define CPPCMS_BOOST_PP_SEQ_SIZE_111(_) CPPCMS_BOOST_PP_SEQ_SIZE_112
# define CPPCMS_BOOST_PP_SEQ_SIZE_112(_) CPPCMS_BOOST_PP_SEQ_SIZE_113
# define CPPCMS_BOOST_PP_SEQ_SIZE_113(_) CPPCMS_BOOST_PP_SEQ_SIZE_114
# define CPPCMS_BOOST_PP_SEQ_SIZE_114(_) CPPCMS_BOOST_PP_SEQ_SIZE_115
# define CPPCMS_BOOST_PP_SEQ_SIZE_115(_) CPPCMS_BOOST_PP_SEQ_SIZE_116
# define CPPCMS_BOOST_PP_SEQ_SIZE_116(_) CPPCMS_BOOST_PP_SEQ_SIZE_117
# define CPPCMS_BOOST_PP_SEQ_SIZE_117(_) CPPCMS_BOOST_PP_SEQ_SIZE_118
# define CPPCMS_BOOST_PP_SEQ_SIZE_118(_) CPPCMS_BOOST_PP_SEQ_SIZE_119
# define CPPCMS_BOOST_PP_SEQ_SIZE_119(_) CPPCMS_BOOST_PP_SEQ_SIZE_120
# define CPPCMS_BOOST_PP_SEQ_SIZE_120(_) CPPCMS_BOOST_PP_SEQ_SIZE_121
# define CPPCMS_BOOST_PP_SEQ_SIZE_121(_) CPPCMS_BOOST_PP_SEQ_SIZE_122
# define CPPCMS_BOOST_PP_SEQ_SIZE_122(_) CPPCMS_BOOST_PP_SEQ_SIZE_123
# define CPPCMS_BOOST_PP_SEQ_SIZE_123(_) CPPCMS_BOOST_PP_SEQ_SIZE_124
# define CPPCMS_BOOST_PP_SEQ_SIZE_124(_) CPPCMS_BOOST_PP_SEQ_SIZE_125
# define CPPCMS_BOOST_PP_SEQ_SIZE_125(_) CPPCMS_BOOST_PP_SEQ_SIZE_126
# define CPPCMS_BOOST_PP_SEQ_SIZE_126(_) CPPCMS_BOOST_PP_SEQ_SIZE_127
# define CPPCMS_BOOST_PP_SEQ_SIZE_127(_) CPPCMS_BOOST_PP_SEQ_SIZE_128
# define CPPCMS_BOOST_PP_SEQ_SIZE_128(_) CPPCMS_BOOST_PP_SEQ_SIZE_129
# define CPPCMS_BOOST_PP_SEQ_SIZE_129(_) CPPCMS_BOOST_PP_SEQ_SIZE_130
# define CPPCMS_BOOST_PP_SEQ_SIZE_130(_) CPPCMS_BOOST_PP_SEQ_SIZE_131
# define CPPCMS_BOOST_PP_SEQ_SIZE_131(_) CPPCMS_BOOST_PP_SEQ_SIZE_132
# define CPPCMS_BOOST_PP_SEQ_SIZE_132(_) CPPCMS_BOOST_PP_SEQ_SIZE_133
# define CPPCMS_BOOST_PP_SEQ_SIZE_133(_) CPPCMS_BOOST_PP_SEQ_SIZE_134
# define CPPCMS_BOOST_PP_SEQ_SIZE_134(_) CPPCMS_BOOST_PP_SEQ_SIZE_135
# define CPPCMS_BOOST_PP_SEQ_SIZE_135(_) CPPCMS_BOOST_PP_SEQ_SIZE_136
# define CPPCMS_BOOST_PP_SEQ_SIZE_136(_) CPPCMS_BOOST_PP_SEQ_SIZE_137
# define CPPCMS_BOOST_PP_SEQ_SIZE_137(_) CPPCMS_BOOST_PP_SEQ_SIZE_138
# define CPPCMS_BOOST_PP_SEQ_SIZE_138(_) CPPCMS_BOOST_PP_SEQ_SIZE_139
# define CPPCMS_BOOST_PP_SEQ_SIZE_139(_) CPPCMS_BOOST_PP_SEQ_SIZE_140
# define CPPCMS_BOOST_PP_SEQ_SIZE_140(_) CPPCMS_BOOST_PP_SEQ_SIZE_141
# define CPPCMS_BOOST_PP_SEQ_SIZE_141(_) CPPCMS_BOOST_PP_SEQ_SIZE_142
# define CPPCMS_BOOST_PP_SEQ_SIZE_142(_) CPPCMS_BOOST_PP_SEQ_SIZE_143
# define CPPCMS_BOOST_PP_SEQ_SIZE_143(_) CPPCMS_BOOST_PP_SEQ_SIZE_144
# define CPPCMS_BOOST_PP_SEQ_SIZE_144(_) CPPCMS_BOOST_PP_SEQ_SIZE_145
# define CPPCMS_BOOST_PP_SEQ_SIZE_145(_) CPPCMS_BOOST_PP_SEQ_SIZE_146
# define CPPCMS_BOOST_PP_SEQ_SIZE_146(_) CPPCMS_BOOST_PP_SEQ_SIZE_147
# define CPPCMS_BOOST_PP_SEQ_SIZE_147(_) CPPCMS_BOOST_PP_SEQ_SIZE_148
# define CPPCMS_BOOST_PP_SEQ_SIZE_148(_) CPPCMS_BOOST_PP_SEQ_SIZE_149
# define CPPCMS_BOOST_PP_SEQ_SIZE_149(_) CPPCMS_BOOST_PP_SEQ_SIZE_150
# define CPPCMS_BOOST_PP_SEQ_SIZE_150(_) CPPCMS_BOOST_PP_SEQ_SIZE_151
# define CPPCMS_BOOST_PP_SEQ_SIZE_151(_) CPPCMS_BOOST_PP_SEQ_SIZE_152
# define CPPCMS_BOOST_PP_SEQ_SIZE_152(_) CPPCMS_BOOST_PP_SEQ_SIZE_153
# define CPPCMS_BOOST_PP_SEQ_SIZE_153(_) CPPCMS_BOOST_PP_SEQ_SIZE_154
# define CPPCMS_BOOST_PP_SEQ_SIZE_154(_) CPPCMS_BOOST_PP_SEQ_SIZE_155
# define CPPCMS_BOOST_PP_SEQ_SIZE_155(_) CPPCMS_BOOST_PP_SEQ_SIZE_156
# define CPPCMS_BOOST_PP_SEQ_SIZE_156(_) CPPCMS_BOOST_PP_SEQ_SIZE_157
# define CPPCMS_BOOST_PP_SEQ_SIZE_157(_) CPPCMS_BOOST_PP_SEQ_SIZE_158
# define CPPCMS_BOOST_PP_SEQ_SIZE_158(_) CPPCMS_BOOST_PP_SEQ_SIZE_159
# define CPPCMS_BOOST_PP_SEQ_SIZE_159(_) CPPCMS_BOOST_PP_SEQ_SIZE_160
# define CPPCMS_BOOST_PP_SEQ_SIZE_160(_) CPPCMS_BOOST_PP_SEQ_SIZE_161
# define CPPCMS_BOOST_PP_SEQ_SIZE_161(_) CPPCMS_BOOST_PP_SEQ_SIZE_162
# define CPPCMS_BOOST_PP_SEQ_SIZE_162(_) CPPCMS_BOOST_PP_SEQ_SIZE_163
# define CPPCMS_BOOST_PP_SEQ_SIZE_163(_) CPPCMS_BOOST_PP_SEQ_SIZE_164
# define CPPCMS_BOOST_PP_SEQ_SIZE_164(_) CPPCMS_BOOST_PP_SEQ_SIZE_165
# define CPPCMS_BOOST_PP_SEQ_SIZE_165(_) CPPCMS_BOOST_PP_SEQ_SIZE_166
# define CPPCMS_BOOST_PP_SEQ_SIZE_166(_) CPPCMS_BOOST_PP_SEQ_SIZE_167
# define CPPCMS_BOOST_PP_SEQ_SIZE_167(_) CPPCMS_BOOST_PP_SEQ_SIZE_168
# define CPPCMS_BOOST_PP_SEQ_SIZE_168(_) CPPCMS_BOOST_PP_SEQ_SIZE_169
# define CPPCMS_BOOST_PP_SEQ_SIZE_169(_) CPPCMS_BOOST_PP_SEQ_SIZE_170
# define CPPCMS_BOOST_PP_SEQ_SIZE_170(_) CPPCMS_BOOST_PP_SEQ_SIZE_171
# define CPPCMS_BOOST_PP_SEQ_SIZE_171(_) CPPCMS_BOOST_PP_SEQ_SIZE_172
# define CPPCMS_BOOST_PP_SEQ_SIZE_172(_) CPPCMS_BOOST_PP_SEQ_SIZE_173
# define CPPCMS_BOOST_PP_SEQ_SIZE_173(_) CPPCMS_BOOST_PP_SEQ_SIZE_174
# define CPPCMS_BOOST_PP_SEQ_SIZE_174(_) CPPCMS_BOOST_PP_SEQ_SIZE_175
# define CPPCMS_BOOST_PP_SEQ_SIZE_175(_) CPPCMS_BOOST_PP_SEQ_SIZE_176
# define CPPCMS_BOOST_PP_SEQ_SIZE_176(_) CPPCMS_BOOST_PP_SEQ_SIZE_177
# define CPPCMS_BOOST_PP_SEQ_SIZE_177(_) CPPCMS_BOOST_PP_SEQ_SIZE_178
# define CPPCMS_BOOST_PP_SEQ_SIZE_178(_) CPPCMS_BOOST_PP_SEQ_SIZE_179
# define CPPCMS_BOOST_PP_SEQ_SIZE_179(_) CPPCMS_BOOST_PP_SEQ_SIZE_180
# define CPPCMS_BOOST_PP_SEQ_SIZE_180(_) CPPCMS_BOOST_PP_SEQ_SIZE_181
# define CPPCMS_BOOST_PP_SEQ_SIZE_181(_) CPPCMS_BOOST_PP_SEQ_SIZE_182
# define CPPCMS_BOOST_PP_SEQ_SIZE_182(_) CPPCMS_BOOST_PP_SEQ_SIZE_183
# define CPPCMS_BOOST_PP_SEQ_SIZE_183(_) CPPCMS_BOOST_PP_SEQ_SIZE_184
# define CPPCMS_BOOST_PP_SEQ_SIZE_184(_) CPPCMS_BOOST_PP_SEQ_SIZE_185
# define CPPCMS_BOOST_PP_SEQ_SIZE_185(_) CPPCMS_BOOST_PP_SEQ_SIZE_186
# define CPPCMS_BOOST_PP_SEQ_SIZE_186(_) CPPCMS_BOOST_PP_SEQ_SIZE_187
# define CPPCMS_BOOST_PP_SEQ_SIZE_187(_) CPPCMS_BOOST_PP_SEQ_SIZE_188
# define CPPCMS_BOOST_PP_SEQ_SIZE_188(_) CPPCMS_BOOST_PP_SEQ_SIZE_189
# define CPPCMS_BOOST_PP_SEQ_SIZE_189(_) CPPCMS_BOOST_PP_SEQ_SIZE_190
# define CPPCMS_BOOST_PP_SEQ_SIZE_190(_) CPPCMS_BOOST_PP_SEQ_SIZE_191
# define CPPCMS_BOOST_PP_SEQ_SIZE_191(_) CPPCMS_BOOST_PP_SEQ_SIZE_192
# define CPPCMS_BOOST_PP_SEQ_SIZE_192(_) CPPCMS_BOOST_PP_SEQ_SIZE_193
# define CPPCMS_BOOST_PP_SEQ_SIZE_193(_) CPPCMS_BOOST_PP_SEQ_SIZE_194
# define CPPCMS_BOOST_PP_SEQ_SIZE_194(_) CPPCMS_BOOST_PP_SEQ_SIZE_195
# define CPPCMS_BOOST_PP_SEQ_SIZE_195(_) CPPCMS_BOOST_PP_SEQ_SIZE_196
# define CPPCMS_BOOST_PP_SEQ_SIZE_196(_) CPPCMS_BOOST_PP_SEQ_SIZE_197
# define CPPCMS_BOOST_PP_SEQ_SIZE_197(_) CPPCMS_BOOST_PP_SEQ_SIZE_198
# define CPPCMS_BOOST_PP_SEQ_SIZE_198(_) CPPCMS_BOOST_PP_SEQ_SIZE_199
# define CPPCMS_BOOST_PP_SEQ_SIZE_199(_) CPPCMS_BOOST_PP_SEQ_SIZE_200
# define CPPCMS_BOOST_PP_SEQ_SIZE_200(_) CPPCMS_BOOST_PP_SEQ_SIZE_201
# define CPPCMS_BOOST_PP_SEQ_SIZE_201(_) CPPCMS_BOOST_PP_SEQ_SIZE_202
# define CPPCMS_BOOST_PP_SEQ_SIZE_202(_) CPPCMS_BOOST_PP_SEQ_SIZE_203
# define CPPCMS_BOOST_PP_SEQ_SIZE_203(_) CPPCMS_BOOST_PP_SEQ_SIZE_204
# define CPPCMS_BOOST_PP_SEQ_SIZE_204(_) CPPCMS_BOOST_PP_SEQ_SIZE_205
# define CPPCMS_BOOST_PP_SEQ_SIZE_205(_) CPPCMS_BOOST_PP_SEQ_SIZE_206
# define CPPCMS_BOOST_PP_SEQ_SIZE_206(_) CPPCMS_BOOST_PP_SEQ_SIZE_207
# define CPPCMS_BOOST_PP_SEQ_SIZE_207(_) CPPCMS_BOOST_PP_SEQ_SIZE_208
# define CPPCMS_BOOST_PP_SEQ_SIZE_208(_) CPPCMS_BOOST_PP_SEQ_SIZE_209
# define CPPCMS_BOOST_PP_SEQ_SIZE_209(_) CPPCMS_BOOST_PP_SEQ_SIZE_210
# define CPPCMS_BOOST_PP_SEQ_SIZE_210(_) CPPCMS_BOOST_PP_SEQ_SIZE_211
# define CPPCMS_BOOST_PP_SEQ_SIZE_211(_) CPPCMS_BOOST_PP_SEQ_SIZE_212
# define CPPCMS_BOOST_PP_SEQ_SIZE_212(_) CPPCMS_BOOST_PP_SEQ_SIZE_213
# define CPPCMS_BOOST_PP_SEQ_SIZE_213(_) CPPCMS_BOOST_PP_SEQ_SIZE_214
# define CPPCMS_BOOST_PP_SEQ_SIZE_214(_) CPPCMS_BOOST_PP_SEQ_SIZE_215
# define CPPCMS_BOOST_PP_SEQ_SIZE_215(_) CPPCMS_BOOST_PP_SEQ_SIZE_216
# define CPPCMS_BOOST_PP_SEQ_SIZE_216(_) CPPCMS_BOOST_PP_SEQ_SIZE_217
# define CPPCMS_BOOST_PP_SEQ_SIZE_217(_) CPPCMS_BOOST_PP_SEQ_SIZE_218
# define CPPCMS_BOOST_PP_SEQ_SIZE_218(_) CPPCMS_BOOST_PP_SEQ_SIZE_219
# define CPPCMS_BOOST_PP_SEQ_SIZE_219(_) CPPCMS_BOOST_PP_SEQ_SIZE_220
# define CPPCMS_BOOST_PP_SEQ_SIZE_220(_) CPPCMS_BOOST_PP_SEQ_SIZE_221
# define CPPCMS_BOOST_PP_SEQ_SIZE_221(_) CPPCMS_BOOST_PP_SEQ_SIZE_222
# define CPPCMS_BOOST_PP_SEQ_SIZE_222(_) CPPCMS_BOOST_PP_SEQ_SIZE_223
# define CPPCMS_BOOST_PP_SEQ_SIZE_223(_) CPPCMS_BOOST_PP_SEQ_SIZE_224
# define CPPCMS_BOOST_PP_SEQ_SIZE_224(_) CPPCMS_BOOST_PP_SEQ_SIZE_225
# define CPPCMS_BOOST_PP_SEQ_SIZE_225(_) CPPCMS_BOOST_PP_SEQ_SIZE_226
# define CPPCMS_BOOST_PP_SEQ_SIZE_226(_) CPPCMS_BOOST_PP_SEQ_SIZE_227
# define CPPCMS_BOOST_PP_SEQ_SIZE_227(_) CPPCMS_BOOST_PP_SEQ_SIZE_228
# define CPPCMS_BOOST_PP_SEQ_SIZE_228(_) CPPCMS_BOOST_PP_SEQ_SIZE_229
# define CPPCMS_BOOST_PP_SEQ_SIZE_229(_) CPPCMS_BOOST_PP_SEQ_SIZE_230
# define CPPCMS_BOOST_PP_SEQ_SIZE_230(_) CPPCMS_BOOST_PP_SEQ_SIZE_231
# define CPPCMS_BOOST_PP_SEQ_SIZE_231(_) CPPCMS_BOOST_PP_SEQ_SIZE_232
# define CPPCMS_BOOST_PP_SEQ_SIZE_232(_) CPPCMS_BOOST_PP_SEQ_SIZE_233
# define CPPCMS_BOOST_PP_SEQ_SIZE_233(_) CPPCMS_BOOST_PP_SEQ_SIZE_234
# define CPPCMS_BOOST_PP_SEQ_SIZE_234(_) CPPCMS_BOOST_PP_SEQ_SIZE_235
# define CPPCMS_BOOST_PP_SEQ_SIZE_235(_) CPPCMS_BOOST_PP_SEQ_SIZE_236
# define CPPCMS_BOOST_PP_SEQ_SIZE_236(_) CPPCMS_BOOST_PP_SEQ_SIZE_237
# define CPPCMS_BOOST_PP_SEQ_SIZE_237(_) CPPCMS_BOOST_PP_SEQ_SIZE_238
# define CPPCMS_BOOST_PP_SEQ_SIZE_238(_) CPPCMS_BOOST_PP_SEQ_SIZE_239
# define CPPCMS_BOOST_PP_SEQ_SIZE_239(_) CPPCMS_BOOST_PP_SEQ_SIZE_240
# define CPPCMS_BOOST_PP_SEQ_SIZE_240(_) CPPCMS_BOOST_PP_SEQ_SIZE_241
# define CPPCMS_BOOST_PP_SEQ_SIZE_241(_) CPPCMS_BOOST_PP_SEQ_SIZE_242
# define CPPCMS_BOOST_PP_SEQ_SIZE_242(_) CPPCMS_BOOST_PP_SEQ_SIZE_243
# define CPPCMS_BOOST_PP_SEQ_SIZE_243(_) CPPCMS_BOOST_PP_SEQ_SIZE_244
# define CPPCMS_BOOST_PP_SEQ_SIZE_244(_) CPPCMS_BOOST_PP_SEQ_SIZE_245
# define CPPCMS_BOOST_PP_SEQ_SIZE_245(_) CPPCMS_BOOST_PP_SEQ_SIZE_246
# define CPPCMS_BOOST_PP_SEQ_SIZE_246(_) CPPCMS_BOOST_PP_SEQ_SIZE_247
# define CPPCMS_BOOST_PP_SEQ_SIZE_247(_) CPPCMS_BOOST_PP_SEQ_SIZE_248
# define CPPCMS_BOOST_PP_SEQ_SIZE_248(_) CPPCMS_BOOST_PP_SEQ_SIZE_249
# define CPPCMS_BOOST_PP_SEQ_SIZE_249(_) CPPCMS_BOOST_PP_SEQ_SIZE_250
# define CPPCMS_BOOST_PP_SEQ_SIZE_250(_) CPPCMS_BOOST_PP_SEQ_SIZE_251
# define CPPCMS_BOOST_PP_SEQ_SIZE_251(_) CPPCMS_BOOST_PP_SEQ_SIZE_252
# define CPPCMS_BOOST_PP_SEQ_SIZE_252(_) CPPCMS_BOOST_PP_SEQ_SIZE_253
# define CPPCMS_BOOST_PP_SEQ_SIZE_253(_) CPPCMS_BOOST_PP_SEQ_SIZE_254
# define CPPCMS_BOOST_PP_SEQ_SIZE_254(_) CPPCMS_BOOST_PP_SEQ_SIZE_255
# define CPPCMS_BOOST_PP_SEQ_SIZE_255(_) CPPCMS_BOOST_PP_SEQ_SIZE_256
# define CPPCMS_BOOST_PP_SEQ_SIZE_256(_) CPPCMS_BOOST_PP_SEQ_SIZE_257
#
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_0 0
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_1 1
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_2 2
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_3 3
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_4 4
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_5 5
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_6 6
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_7 7
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_8 8
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_9 9
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_10 10
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_11 11
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_12 12
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_13 13
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_14 14
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_15 15
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_16 16
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_17 17
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_18 18
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_19 19
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_20 20
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_21 21
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_22 22
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_23 23
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_24 24
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_25 25
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_26 26
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_27 27
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_28 28
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_29 29
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_30 30
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_31 31
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_32 32
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_33 33
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_34 34
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_35 35
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_36 36
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_37 37
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_38 38
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_39 39
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_40 40
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_41 41
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_42 42
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_43 43
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_44 44
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_45 45
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_46 46
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_47 47
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_48 48
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_49 49
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_50 50
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_51 51
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_52 52
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_53 53
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_54 54
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_55 55
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_56 56
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_57 57
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_58 58
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_59 59
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_60 60
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_61 61
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_62 62
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_63 63
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_64 64
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_65 65
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_66 66
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_67 67
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_68 68
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_69 69
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_70 70
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_71 71
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_72 72
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_73 73
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_74 74
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_75 75
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_76 76
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_77 77
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_78 78
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_79 79
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_80 80
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_81 81
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_82 82
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_83 83
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_84 84
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_85 85
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_86 86
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_87 87
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_88 88
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_89 89
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_90 90
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_91 91
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_92 92
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_93 93
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_94 94
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_95 95
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_96 96
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_97 97
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_98 98
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_99 99
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_100 100
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_101 101
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_102 102
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_103 103
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_104 104
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_105 105
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_106 106
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_107 107
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_108 108
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_109 109
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_110 110
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_111 111
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_112 112
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_113 113
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_114 114
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_115 115
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_116 116
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_117 117
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_118 118
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_119 119
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_120 120
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_121 121
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_122 122
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_123 123
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_124 124
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_125 125
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_126 126
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_127 127
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_128 128
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_129 129
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_130 130
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_131 131
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_132 132
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_133 133
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_134 134
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_135 135
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_136 136
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_137 137
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_138 138
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_139 139
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_140 140
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_141 141
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_142 142
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_143 143
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_144 144
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_145 145
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_146 146
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_147 147
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_148 148
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_149 149
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_150 150
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_151 151
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_152 152
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_153 153
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_154 154
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_155 155
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_156 156
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_157 157
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_158 158
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_159 159
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_160 160
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_161 161
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_162 162
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_163 163
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_164 164
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_165 165
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_166 166
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_167 167
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_168 168
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_169 169
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_170 170
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_171 171
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_172 172
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_173 173
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_174 174
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_175 175
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_176 176
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_177 177
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_178 178
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_179 179
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_180 180
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_181 181
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_182 182
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_183 183
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_184 184
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_185 185
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_186 186
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_187 187
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_188 188
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_189 189
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_190 190
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_191 191
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_192 192
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_193 193
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_194 194
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_195 195
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_196 196
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_197 197
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_198 198
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_199 199
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_200 200
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_201 201
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_202 202
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_203 203
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_204 204
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_205 205
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_206 206
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_207 207
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_208 208
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_209 209
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_210 210
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_211 211
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_212 212
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_213 213
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_214 214
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_215 215
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_216 216
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_217 217
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_218 218
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_219 219
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_220 220
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_221 221
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_222 222
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_223 223
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_224 224
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_225 225
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_226 226
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_227 227
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_228 228
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_229 229
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_230 230
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_231 231
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_232 232
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_233 233
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_234 234
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_235 235
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_236 236
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_237 237
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_238 238
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_239 239
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_240 240
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_241 241
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_242 242
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_243 243
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_244 244
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_245 245
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_246 246
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_247 247
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_248 248
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_249 249
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_250 250
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_251 251
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_252 252
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_253 253
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_254 254
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_255 255
# define CPPCMS_BOOST_PP_SEQ_SIZE_CPPCMS_BOOST_PP_SEQ_SIZE_256 256
#
# endif
